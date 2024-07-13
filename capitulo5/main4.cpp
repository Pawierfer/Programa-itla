#include <stdio.h>

/* Prueba de variables globales, locales y est�ticas.
El programa utiliza funciones en las que se usan diferentes tipos de
variables. */
int f1(void);
int f2(void);
int f3(void); /* Prototipos de funciones. */
int f4(void);

int K = 3; /* Variable global. */

int main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la funci�n f1 es: %d", f1());
        printf("\nEl resultado de la funci�n f2 es: %d", f2());
        printf("\nEl resultado de la funci�n f3 es: %d", f3());
        printf("\nEl resultado de la funci�n f4 es: %d", f4());
    }
    return 0;
}

int f1(void)
/* La funci�n f1 utiliza la variable global. */
{
    K += K;
    return (K);
}

int f2(void)
/* La funci�n f2 utiliza la variable local. */
{
    int K = 1;
    K++;
    return (K);
}

int f3(void)
/* La funci�n f3 utiliza la variable est�tica. */
{
    static int K = 8;
    K += 2;
    return (K);
}

int f4(void)
/* La funci�n f4 utiliza dos variables con el mismo nombre: local
y global. */
{
    int local_K = 5;
    local_K = local_K + K; /* Uso de la variable local (local_K) y global (K) */
    return (local_K);
}
