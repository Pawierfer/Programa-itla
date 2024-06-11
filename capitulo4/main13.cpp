#include <stdio.h>

/* Prototipo de función */
void Rango(float);

/* Variables globales de tipo entero */
int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

/* El uso de variables globales no es muy recomendable. En estos
➥ problemas se utilizan únicamente con el objetivo de que el lector
➥ pueda observar la forma en que se aplican. */

int main(void) {
    float CAL;
    printf("Ingresa la primera calificacion del alumno: ");
    scanf("%f", &CAL);
    while (CAL != -1) {
        Rango(CAL); /* Llamada a la función Rango. Se pasa un parámetro por valor. */
        printf("Ingresa la siguiente calificacion del alumno: ");
        scanf("%f", &CAL);
    }
    printf("\n0..3.99 = %d", RA1);
    printf("\n4..5.99 = %d", RA2);
    printf("\n6..7.99 = %d", RA3);
    printf("\n8..8.99 = %d", RA4);
    printf("\n9..10 = %d", RA5);

    return 0; // La función main debe devolver un valor entero
}

void Rango(float VAL)
/* La función incrementa una variable dependiendo del valor del
➥ parámetro VAL. */
{
    if (VAL < 4)
        RA1++;
    else if (VAL < 6)
        RA2++;
    else if (VAL < 8)
        RA3++;
    else if (VAL < 9)
        RA4++;
    else if (VAL <= 10)
        RA5++;
}

