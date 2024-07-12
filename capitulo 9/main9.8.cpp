#include <stdio.h>

/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */
typedef struct /* Declaración de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "wb")) != NULL) /* Se abre el archivo en modo escritura binaria ("wb"). */
    {
        escribe(ar);
        fclose(ar); /* Se cierra el archivo después de usarlo. */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }
}

void escribe(FILE *ap)
/* Esta función sirve para leer los datos de los alumnos utilizando una estructura tipo alumno, que se almacenará posteriormente en un archivo. */
{
    alumno alu;
    int i = 0, r;

    printf("\n¿Desea ingresar información sobre alumnos? (Sí-1 No-0): ");
    scanf("%d", &r);

    while (r)
    {
        i++;
        printf("Matrícula del alumno %d: ", i);
        scanf("%d", &alu.matricula);

        printf("Nombre del alumno %d: ", i);
        fflush(stdin); /* Limpiar el buffer de entrada. */
        gets(alu.nombre);

        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);

        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap); /* Escribir la estructura en el archivo. */

        printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): ");
        scanf("%d", &r);
    }
}
