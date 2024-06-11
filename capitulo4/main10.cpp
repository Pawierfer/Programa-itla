#include <stdio.h>

/* Prototipo de función */
int mad(int);

int main(void) {
    int NUM, RES;
    printf("\nIngresa el número: ");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("\nEl mayor divisor de %d es: %d", NUM, RES);
    return 0; // La función main debe devolver un valor entero
}

/* Función para calcular el mayor divisor de un número */
int mad(int N1) {
    int I = N1 / 2; // Se inicializa I con el máximo valor posible que puede ser divisor de N1
    while (N1 % I != 0) {
        I--; // Disminuye I hasta encontrar el mayor divisor de N1
    }
    return I;
}

