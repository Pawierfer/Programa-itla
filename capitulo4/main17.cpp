#include <stdio.h>
#include <math.h>

/* Prototipo de funci�n */
int Expresion(int, int, int);

int main(void) {
    int EXP, T = 0, P = 0, Q = 0;
    EXP = Expresion(T, P, Q);

    while (EXP < 5500) {
        while (EXP < 5500) {
            while (EXP < 5500) {
                printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
                Q++;
                EXP = Expresion(T, P, Q);
            }
            P++;
            Q = 0;
            EXP = Expresion(T, P, Q);
        }
        T++;
        P = 0;
        Q = 0;
        EXP = Expresion(T, P, Q);
    }

    return 0; // La funci�n main debe devolver un valor entero
}

int Expresion(int T, int P, int Q) {
    /* Esta funci�n obtiene el resultado de la expresi�n para los valores de T, P y Q. */
    int RES;
    RES = 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
    return RES;
}



