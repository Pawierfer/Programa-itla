#include <stdio.h>

/* Combinaci�n de variables globales y locales, y par�metros por valor y por referencia. */
int a, b, c, d; /* Variables globales. */

void funcion1(int *, int *);
/* Prototipo de funci�n. Observa que los dos par�metros son por referencia. */

int funcion2(int, int *);
/* En este prototipo el primer par�metro es por valor y el segundo por referencia. */

int main(void)
{
    int a_local; /* Nota que a es una variable local. */
    a_local = 1; /* Se asigna un valor a la variable local a. */
    b = 2; /* Se asignan valores a las variables globales b, c y d. */
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a_local, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a_local, b, c, d);
    a_local = funcion2(c, &d);
    printf("\n%d %d %d %d", a_local, b, c, d);
}

void funcion1(int *b, int *c)
{
    int d_local;
    a = 5; /* Observa que se hace referencia a la variable global a. */
    d_local = 3; /* Nota que se hace referencia a la variable local d. */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d_local);
}

int funcion2(int c, int *d)
{
    int b_local;
    a++;
    b_local = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b_local, c, *d);
    return (c);
}

