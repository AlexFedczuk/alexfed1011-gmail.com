#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primerNombre [31];
    int edad;

    printf("Ingrese su primer nombre: ");
    scanf("%s", &primerNombre);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Su primer nombre es: %s \n", primerNombre);
    printf("Su edad es: %d \n", edad);
}
