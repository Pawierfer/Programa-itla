#include <stdio.h>

/* Prototipo de funci�n */
int multiplo(int, int);

int main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
    return 0; // La funci�n main debe devolver un valor entero
}

/* Funci�n para determinar si el segundo n�mero es m�ltiplo del primero */
int multiplo(int num1, int num2) {
    if (num2 % num1 == 0) {
        printf("%d es multiplo de %d\n", num2, num1);
        return 1; // Devuelve 1 si es m�ltiplo
    } else {
        printf("%d no es multiplo de %d\n", num2, num1);
        return 0; // Devuelve 0 si no es m�ltiplo
    }
}


