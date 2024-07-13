#include <stdio.h>


int cubo(int n); /* Prototipo de función. */

int main(void)
{
    int I, CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(I); /* Llamada a la función cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}

int cubo(int n) /* Declaración de la función. */
/* La función calcula el cubo del argumento n. */
{
    return (n * n * n);
}
