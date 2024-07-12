#include <stdio.h>
#include <string.h>

/* Estructuras-1.
El programa muestra la manera en que se declara una estructura, así como la
forma en que se tiene acceso a los campos de las variables de tipo estructura
tanto para asignación de valores como para lectura y escritura. */
struct alumno {
    int matricula;
    char nombre[20];
    char carrera[20]; /* Campos de la estructura. */
    float promedio;
    char direccion[30];
}; /* Observa que la declaración de una estructura termina con punto y coma. */

int main(void) {
    /* Observa que las variables de tipo estructura se declaran como cualquier otra
    variable. a1, a2 y a3 son variables de tipo estructura alumno. */
    struct alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"}, a2, a3;
    /* Los campos de a1 reciben valores directamente. */
    char nom[20], car[20], dir[30];
    int mat;
    float pro;

    /* Los campos de a2 reciben valores por medio de una lectura. */
    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2: ");
    fgets(a2.nombre, 20, stdin);
    a2.nombre[strcspn(a2.nombre, "\n")] = 0; // Elimina el salto de línea al final
    printf("Ingrese la carrera del alumno 2: ");
    fgets(a2.carrera, 20, stdin);
    a2.carrera[strcspn(a2.carrera, "\n")] = 0; // Elimina el salto de línea al final
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 2: ");
    fgets(a2.direccion, 30, stdin);
    a2.direccion[strcspn(a2.direccion, "\n")] = 0; // Elimina el salto de línea al final

    /* Los campos de a3 reciben valores por medio de asignaciones. */
    printf("\nIngrese la matrícula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3: ");
    fgets(nom, 20, stdin);
    nom[strcspn(nom, "\n")] = 0; // Elimina el salto de línea al final
    strcpy(a3.nombre, nom);
    printf("Ingrese la carrera del alumno 3: ");
    fgets(car, 20, stdin);
    car[strcspn(car, "\n")] = 0; // Elimina el salto de línea al final
    strcpy(a3.carrera, car);
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);
    printf("Ingrese la dirección del alumno 3: ");
    fgets(dir, 30, stdin);
    dir[strcspn(dir, "\n")] = 0; // Elimina el salto de línea al final
    strcpy(a3.direccion, dir);

    /* Observe la forma en que se imprimen los campos de a1 y a2. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    /* Observa otra forma de escribir los campos de la variable de tipo estructura a3. */
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);

    return 0;
}
