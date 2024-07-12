#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera informaci�n estad�stica de los alumnos de una escuela. */

typedef struct {
    int matricula;
    char nombre[30];
    float cal[5];
} alumno;

void Lectura(alumno[], int T);
void F1(alumno *, int TAM);
void F2(alumno *, int TAM);
void F3(alumno *, int TAM);

int main(void) {
    alumno ARRE[50]; /* Se declara un arreglo unidimensional de tipo alumno. */
    int TAM;
    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1); /* Se verifica que el tama�o del arreglo sea correcto. */

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);

    return 0;
}

void Lectura(alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d\n", I + 1);
        printf("Ingrese la matr�cula del alumno: ");
        scanf("%d", &A[I].matricula);
        getchar(); // Limpiar el buffer del teclado
        printf("Ingrese el nombre del alumno: ");
        fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
        A[I].nombre[strcspn(A[I].nombre, "\n")] = 0; // Eliminar el salto de l�nea al final

        for (J = 0; J < 5; J++) {
            printf("\tIngrese la calificaci�n %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(alumno A[], int T) {
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++) {
        printf("\nMatr�cula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++) {
            SUM += A[I].cal[J];
        }
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f\n", PRO);
    }
}

void F2(alumno A[], int T) {
    int I;
    printf("\nAlumnos con calificaci�n en la tercera materia > 9\n");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("Matr�cula del alumno: %d\n", A[I].matricula);
        }
    }
}

void F3(alumno A[], int T) {
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++) {
        SUM += A[I].cal[3];
    }
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f\n", PRO);
}
