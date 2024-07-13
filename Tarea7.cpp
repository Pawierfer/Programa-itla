#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nombre[50];
    float promedio;
} Alumno;

void grabarDatos(FILE *);
void leerDisco(FILE *);

int main() {
    FILE *archivo;
    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Grabar dato en disco\n");
        printf("2. Leer datos del disco\n");
        printf("3. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);
        getchar(); // Capturar el salto de línea después de scanf

        switch (opcion) {
            case 1:
                grabarDatos(archivo);
                break;
            case 2:
                leerDisco(archivo);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}

void grabarDatos(FILE *archivo) {
    Alumno *alumnos = NULL;
    int n = 0;
    char respuesta;

    do {
        // Incrementar el tamaño del array dinámico
        n++;
        alumnos = (Alumno *)realloc(alumnos, n * sizeof(Alumno));

        printf("\nIngrese la matricula del alumno %d: ", n);
        scanf("%d", &alumnos[n - 1].matricula);
        getchar(); // Capturar el salto de línea después de scanf

        printf("Ingrese el nombre del alumno %d: ", n);
        fgets(alumnos[n - 1].nombre, sizeof(alumnos[n - 1].nombre), stdin);
        alumnos[n - 1].nombre[strcspn(alumnos[n - 1].nombre, "\n")] = '\0'; // Eliminar el salto de línea de fgets

        printf("Ingrese el promedio del alumno %d: ", n);
        scanf("%f", &alumnos[n - 1].promedio);
        getchar(); // Capturar el salto de línea después de scanf

        printf("¿Desea ingresar otro registro? (S/N): ");
        scanf("%c", &respuesta);
        getchar(); // Capturar el salto de línea después de scanf
    } while (respuesta == 'S' || respuesta == 's');

    // Abrir archivo para escritura en modo binario
    archivo = fopen("alumnos.dat", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    // Escribir los datos al archivo
    fwrite(alumnos, sizeof(Alumno), n, archivo);

    fclose(archivo);
    free(alumnos); // Liberar la memoria asignada dinámicamente
}

void leerDisco(FILE *archivo) {
    Alumno alumno;
    int cont = 0;

    // Abrir archivo para lectura en modo binario
    archivo = fopen("alumnos.dat", "rb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    printf("\n--- Contenido del archivo ---\n");
    while (fread(&alumno, sizeof(Alumno), 1, archivo)) {
        cont++;
        printf("Registro %d:\n", cont);
        printf("Matricula: %d\n", alumno.matricula);
        printf("Nombre: %s\n", alumno.nombre);
        printf("Promedio: %.2f\n", alumno.promedio);
        printf("\n");
    }

    fclose(archivo);
}

