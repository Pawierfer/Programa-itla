#include <stdio.h>
#include <math.h>

/* Prototipo de funci�n */
void parimp(int, int *, int *);

int main(void) {
    int NUM, PAR = 0, IMP = 0;
    char respuesta;

    do {
        printf("\nIngresa un n�mero entero: ");
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);

        printf("\n�Deseas ingresar otro numero? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("\nN�mero de pares: %d", PAR);
    printf("\nN�mero de impares: %d", IMP);
    return 0; // La funci�n main debe devolver un valor entero
}

/* La funci�n incrementa el par�metro *P o *I, seg�n sea el n�mero par o impar. */
void parimp(int NUM, int *P, int *I) {
    if (NUM % 2 == 0) {
        *P += 1; // Incrementa el contador de pares
    } else {
        *I += 1; // Incrementa el contador de impares
    }
}
