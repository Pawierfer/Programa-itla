#include <stdio.h>
#include <string.h>

/* Estructuras-2.
El programa muestra la manera en que se declara una estructura, as� como la
forma en que se tiene acceso a los campos de los apuntadores de tipo estructura
tanto para lectura como para escritura. Se utiliza adem�s una funci�n que
recibe como par�metro un apuntador de tipo estructura. */
struct alumno {
    int matricula;
    char nombre[20];
    char carrera[20]; /* Campos de la estructura alumno. */
    float promedio;
    char direccion[30];
};

void Lectura(struct alumno *); /* Prototipo de funci�n. */

int main(void) {
    struct alumno a0 = {120, "Mar�a", "Contabilidad", 8.9, "Quer�taro"};
    struct alumno *a3, *a4, *a5, a6;
    /* Observa que las variables *a3, *a4 y *a5 se declaran como apuntadores de
    tipo estructura alumno. a6 es una variable de tipo estructura alumno. */
    a3 = &a0; /* En este caso al apuntador de tipo estructura alumno a3
    se le asigna la direcci�n de la variable de tipo estructura alumno, a0. */
    a4 = new(struct alumno);
    /* Nota que al apuntador a4 es necesario asignarle una direcci�n de memoria.
    Para tener acceso a los campos de un apuntador de tipo estructura, utiliza uno
    de los dos formatos siguientes:
    apuntador->campo
    o bien
    (*apuntador).campo
    En la lectura de los campos de la variable a4 se utilizan como ejemplo ambos
    formatos. */
    printf("\nIngrese la matr�cula del alumno 4: ");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 4: ");
    fgets(a4->nombre, 20, stdin);
    a4->nombre[strcspn(a4->nombre, "\n")] = 0; // Elimina el salto de l�nea
    printf("Ingrese la carrera del alumno 4: ");
    fgets((*a4).carrera, 20, stdin);
    (*a4).carrera[strcspn((*a4).carrera, "\n")] = 0; // Elimina el salto de l�nea
    printf("Ingrese promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("Ingrese la direcci�n del alumno 4: ");
    fgets(a4->direccion, 30, stdin);
    a4->direccion[strcspn(a4->direccion, "\n")] = 0; // Elimina el salto de l�nea

    a5 = new(struct alumno);
    Lectura(a5); /* En este caso se pasa el apuntador de tipo estructura alumno a5 a la funci�n Lectura. */
    Lectura(&a6); /* En este caso se pasa la variable de tipo estructura alumno a6, a la funci�n Lectura. Observa que en este caso debemos utilizar el operador de direcci�n para preceder a la variable. */

    printf("\nDatos del alumno 3\n");
    /* Observa la forma de escribir los campos de los apuntadores de tipo
    estructura. */
    printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);
    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
    printf("\nDatos del alumno 6\n");
    /* Observa la forma de escribir los campos de la variable tipo estructura. */
    printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);

    // Liberar memoria asignada din�micamente


    return 0;
}

void Lectura(struct alumno *a) {
    /* Esta funci�n permite leer los campos de un apuntador de tipo estructura alumno. */
    printf("\nIngrese la matr�cula del alumno: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno: ");
    fgets(a->nombre, 20, stdin);
    a->nombre[strcspn(a->nombre, "\n")] = 0; // Elimina el salto de l�nea
    printf("Ingrese la carrera del alumno: ");
    fgets((*a).carrera, 20, stdin);
    (*a).carrera[strcspn((*a).carrera, "\n")] = 0; // Elimina el salto de l�nea
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese la direcci�n del alumno: ");
    fgets(a->direccion, 30, stdin);
    a->direccion[strcspn(a->direccion, "\n")] = 0; // Elimina el salto de l�nea
}
