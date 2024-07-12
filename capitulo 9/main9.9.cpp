#include <stdio.h>

/* Alumnos.
El programa lee bloques —variables de tipo estructura alumno— de un archivo
➥de acceso directo. */
typedef struct { /* Declaración de la estructura alumno. */
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "rb")) != NULL) /* Se abre el archivo en modo lectura binaria ("rb"). */
    {
        lee(ar); /* Llamada a la función para leer el archivo. */
        fclose(ar); /* Se cierra el archivo después de usarlo. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }
}

void lee(FILE *ap)
/* Esta función se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu;

    fread(&alu, sizeof(alumno), 1, ap); /* Primera lectura antes de entrar al bucle. */

    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %.2f\t", alu.promedio); /* Mostrar el promedio con dos decimales. */
        puts(alu.nombre);

        fread(&alu, sizeof(alumno), 1, ap); /* Lectura dentro del bucle para avanzar al siguiente registro. */
    }
}
