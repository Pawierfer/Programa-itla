#include <stdio.h>

/* Prototipo de funci�n */
int mad(int);

int main(void) {
    int NUM, RES;
    printf("\nIngresa el n�mero: ");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("\nEl mayor divisor de %d es: %d", NUM, RES);
    return 0; // La funci�n main debe devolver un valor entero
}

/* Funci�n para calcular el mayor divisor de un n�mero */
int mad(int N1) {
    int I = N1 / 2; // Se inicializa I con el m�ximo valor posible que puede ser divisor de N1
    while (N1 % I != 0) {
        I--; // Disminuye I hasta encontrar el mayor divisor de N1
    }
    return I;
}

