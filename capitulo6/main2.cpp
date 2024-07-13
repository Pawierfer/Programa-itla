#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema no se utiliza una variable
global, siguiendo las mejores prácticas. */

int cubo(void); /* Prototipo de función. */
int I;

int main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();   /* Llamada a la función cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }

}

int cubo(void) /* Declaración de la función. */
/* La función calcula el cubo del argumento n. */
{
    int I = 2;
    return (I * I * I);
}

