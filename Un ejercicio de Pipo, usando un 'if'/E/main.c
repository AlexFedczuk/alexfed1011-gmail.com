#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primerNombreUsuario [31];
    char permiso;

    printf("Ingrese 'a', para ingresar su primer nombre: ");
    scanf("%c", &permiso);

    if(permiso=='a')
    {
        printf("Ingrese su primer nombre: ");
        scanf("%s", &primerNombreUsuario);
        printf("Su primer nombre es: %s", primerNombreUsuario);
    }else
    {
        printf("No podra ingresar su nombre, debido a que no ingreso 'a'");
    }

    return 0;
}
    /*crear una variable que contenga el nombre de una persona y que si el usuario ingresa la letra a se muestre el nombre, de lo contrario que no se muestre*/
