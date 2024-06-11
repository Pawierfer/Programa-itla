#include <stdio.h>
#include <math.h>

/* Prototipo de función */
void parimp(int, int *, int *);

int main(void) {
    int NUM, PAR = 0, IMP = 0;
    char respuesta;

    do {
        printf("\nIngresa un número entero: ");
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);

        printf("\n¿Deseas ingresar otro numero? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("\nNúmero de pares: %d", PAR);
    printf("\nNúmero de impares: %d", IMP);
    return 0; // La función main debe devolver un valor entero
}

/* La función incrementa el parámetro *P o *I, según sea el número par o impar. */
void parimp(int NUM, int *P, int *I) {
    if (NUM % 2 == 0) {
        *P += 1; // Incrementa el contador de pares
    } else {
        *I += 1; // Incrementa el contador de impares
    }
}
