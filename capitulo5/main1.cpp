#include <stdio.h>


int cubo(int n); /* Prototipo de funci�n. */

int main(void)
{
    int I, CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(I); /* Llamada a la funci�n cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}

int cubo(int n) /* Declaraci�n de la funci�n. */
/* La funci�n calcula el cubo del argumento n. */
{
    return (n * n * n);
}
