#include <stdio.h>

int main() {
    int num = 10; // Declaramos una variable entera 'num' y le asignamos el valor 10
    int *p; // Declaramos un puntero a entero 'p'

    p = &num; // Asignamos la dirección de memoria de 'num' al puntero 'p'

    printf("El valor de num es: %d\n", num); // Imprimimos el valor de 'num'
    printf("La dirección de memoria de num es: %p\n", &num); // Imprimimos la dirección de memoria de 'num'
    printf("El valor almacenado en la dirección apuntada por p es: %d\n", *p); // Imprimimos el valor almacenado en la dirección apuntada por 'p'
    printf("La dirección de memoria almacenada en p es: %p\n", p); // Imprimimos la dirección de memoria almacenada en 'p'
    p = new int; // Asigna memoria para un entero
    *p = 20; // Asigna un valor a la memoria asignada
    printf("La nueva dirección de memoria almacenada en p es: %p\n", p);
    printf("El valor almacenado en la dirección apuntada por p es: %d\n", *p);


    return 0;
}
