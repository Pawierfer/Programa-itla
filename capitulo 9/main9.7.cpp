#include <stdio.h>

/* Archivos con variables enteras y reales.
El programa lee información de los alumnos de una escuela, almacenada en un
archivo. Utiliza una función para realizar la lectura, pero el archivo se abre
y cierra desde el programa principal. */
void promedio(FILE *);

/* Prototipo de función. Se pasa un archivo como parámetro. */
int main(void)
{
    FILE *ar;

    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        promedio(ar); /* Se llama a la función promedio. Observe la forma como se pasa el archivo como parámetro. */
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}

void promedio(FILE *ar1)
/* Esta función lee los datos de los alumnos desde un archivo, e imprime tanto la matrícula como el promedio de cada alumno. */
{
    int i, j, n, mat;
    float pro, cal;

    fscanf(ar1, "%d", &n); /* Lee el número de alumnos. */

    for (i = 0; i < n; i++)
    {
        fscanf(ar1, "%d", &mat); /* Lee la matrícula de cada alumno. */
        printf("%d\t", mat);
        pro = 0;

        for (j = 0; j < 5; j++)
        {
            fscanf(ar1, "%f", &cal); /* Lee las cinco calificaciones del alumno. */
            pro += cal;
        }

        printf("\t%.2f\n", pro / 5); /* Imprime el promedio de calificaciones del alumno. */
    }
}
