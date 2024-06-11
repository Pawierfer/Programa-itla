#include <stdio.h>

int main() {
    int num = 10; // Declaramos una variable entera 'num' y le asignamos el valor 10
    int *p; // Declaramos un puntero a entero 'p'

    p = &num; // Asignamos la direcci�n de memoria de 'num' al puntero 'p'

    printf("El valor de num es: %d\n", num); // Imprimimos el valor de 'num'
    printf("La direcci�n de memoria de num es: %p\n", &num); // Imprimimos la direcci�n de memoria de 'num'
    printf("El valor almacenado en la direcci�n apuntada por p es: %d\n", *p); // Imprimimos el valor almacenado en la direcci�n apuntada por 'p'
    printf("La direcci�n de memoria almacenada en p es: %p\n", p); // Imprimimos la direcci�n de memoria almacenada en 'p'
    p = new int; // Asigna memoria para un entero
    *p = 20; // Asigna un valor a la memoria asignada
    printf("La nueva direcci�n de memoria almacenada en p es: %p\n", p);
    printf("El valor almacenado en la direcci�n apuntada por p es: %d\n", *p);


    return 0;
}
