#include <stdio.h>

/* Prototipo de funci�n */
int mcd(int, int);

int main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos n�meros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd(NU1, NU2);
    printf("\nEl m�ximo com�n divisor de %d y %d es: %d", NU1, NU2, RES);
    return 0; // La funci�n main debe devolver un valor entero
}

/* Esta funci�n calcula el m�ximo com�n divisor de los n�meros N1 y N2 */
int mcd(int N1, int N2) {
    int I;
    if (N1 < N2) {
        I = N1;
    } else {
        I = N2;
    }
    /* I se inicializa con el menor de los dos n�meros. */

    while (N1 % I != 0 || N2 % I != 0) {
        I--;
    }
    return I;
}
