#include <stdio.h>

/* Archivos con variables enteras y reales.
El programa almacena datos de un grupo de alumnos en un archivo. */
int main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;

    printf("\nIngrese el número de alumnos: ");
    scanf("%d", &n);

    /* Se asume que el valor que ingresa el usuario está comprendido entre 1 y 35. */
    if ((ar = fopen("arc8.txt", "w")) != NULL)
    {
        fprintf(ar, "%d\n", n); /* Se escribe el número de alumnos en el archivo. */

        for (i = 0; i < n; i++)
        {
            printf("Ingrese la matrícula del alumno %d: ", i + 1);
            scanf("%d", &mat);
            fprintf(ar, "%d ", mat); /* Se escribe la matrícula en el archivo. */

            for (j = 0; j < 5; j++)
            {
                printf("Calificación %d: ", j + 1);
                scanf("%f", &cal);
                fprintf(ar, "%.2f ", cal); /* Se escriben las calificaciones en el archivo. */
            }
            fprintf(ar, "\n"); /* Salto de línea después de cada alumno en el archivo. */
        }

        fclose(ar);
        printf("Datos almacenados correctamente en arc8.txt.\n");
    }
    else
    {
        printf("No se puede abrir el archivo.\n");
    }
}
