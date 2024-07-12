#include <stdio.h>
#include <string.h>

/* Declaraci�n de la estructura domicilio utilizando typedef */
typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

/* Declaraci�n de la estructura anidada empleado */
struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; // direccion es un campo de tipo estructura domicilio
};

/* Prototipo de la funci�n Lectura */
void Lectura(struct empleado *);

/* Funci�n principal */
int main(void) {
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jer�nimo", 120, 3490, "Toluca"}};
    struct empleado *e1, e3, *e2, e4;

    /* Lectura de datos para e1 */
    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    fflush(stdin);
    printf("---Ingrese la direcci�n del empleado---\n");
    printf("\tCalle: ");
    gets(e1->direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(e1->direccion.localidad);

    /* Lectura de datos para e3 */
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    fflush(stdin);
    printf("---Ingrese la direcci�n del empleado---\n");
    printf("\tCalle: ");
    gets(e3.direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e3.direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(e3.direccion.localidad);

    /* Lectura de datos para e2 y e4 utilizando la funci�n Lectura */
    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    Lectura(e2);

    Lectura(&e4);

    /* Impresi�n de datos */
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("Datos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    /* Liberaci�n de memoria para e1 y e2 */
    free(e1);
    free(e2);

    return 0;
}

/* Definici�n de la funci�n Lectura */
void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    scanf("%s", a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("---Ingrese la direcci�n del empleado---\n");
    printf("\tCalle: ");
    gets(a->direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}
