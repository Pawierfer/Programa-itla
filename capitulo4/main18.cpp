#include <stdio.h>

/* Prototipos de funciones */
void funcion1(int, int *, int *);
int funcion2(int *, int);

/* Variables globales */
int a, b, c, d;

int main(void) {
    int a; // Variable local 'a' en main
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(&a, c);
    printf("\n%d %d %d %d", a, b, c, d);
    return 0;
}

void funcion1(int r, int *b, int *c) {
    int d;
    a = *c;
    d = a + 3 + *b;
    if (r) {
        *b = *b + 2;
        *c = *c + 3;
        printf("\n%d %d %d %d", a, *b, *c, d);
    } else {
        *b = *b + 5;
        *c = *c + 4;
        printf("\n%d %d %d %d", a, *b, *c, d);
    }
}

int funcion2(int *d, int c) {
    int b;
    a = 1;
    b = 7;
    funcion1(-1, d, &b);
    printf("\n%d %d %d %d", a, b, c, *d);
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return c;
}
