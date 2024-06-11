#include <stdio.h>
#include <math.h>

/* Prototipos de funciones */
void Acutem(float);
void Maxima(float, int);
void Minima(float, int);

/* Variables globales */
float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;
int HMAX;
int HMIN;

/* El uso de variables globales no es muy recomendable. En estos
➥ problemas se utilizan únicamente con el objetivo de que el lector
➥ pueda observar la forma en que se aplican. */

int main(void) {
    float TEM;
    int I;
    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);
        Maxima(TEM, I); /* Llamada a las funciones. Paso de parámetros por valor. */
        Minima(TEM, I);
    }
    printf("\nPromedio del dia: %5.2f", (ACT / 24));
    printf("\nMaxima del dia: %5.2f \tHora: %d", MAX, HMAX);
    printf("\nMinima del dia: %5.2f \tHora: %d", MIN, HMIN);
    return 0; // La función main debe devolver un valor entero
}

void Acutem(float T) {
    /* Esta función acumula las temperaturas en la variable global ACT
    ➥ para posteriormente calcular el promedio. */
    ACT += T;
}

void Maxima(float T, int H) {
    /* Esta función almacena la temperatura máxima y la hora en que se
    ➥ produjo en las variables globales MAX y HMAX, respectivamente. */
    if (MAX < T) {
        MAX = T;
        HMAX = H;
    }
}

void Minima(float T, int H) {
    /* Esta función almacena la temperatura mínima y la hora en que se
    ➥ produjo en las variables globales MIN y HMIN. */
    if (MIN > T) {
        MIN = T;
        HMIN = H;
    }
}


