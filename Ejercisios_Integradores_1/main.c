#include <stdio.h>
#include <stdlib.h>

struct Empleado {
  char nombre[300];
  int edad;
  char dni[300];
};

typedef struct Empleado Mortifago;

int main()
{
    /*Generar  una  estructura  para  guardar  los  datos  pertinentes  de  un  Empleado.
    Una  vez generada la estructura se pide crear un vector de 5 Empleados. Estos 5 empleados deben
    ser cargados por teclado por medio de un procedimiento. */

    Mortifago Malosos[5];
    int aux = 0;

    while(aux <= 4){

    printf("Cargar nombre: ");
    gets(Malosos[aux].nombre);
    fflush(stdin);

    printf("\nCargar edad: ");
    scanf("%d", &Malosos[aux].edad);
    fflush(stdin);

    printf("\nCargar DNI: ");
    gets(Malosos[aux].dni);
    fflush(stdin);

    aux++;
    printf("\nEl nombre del empleado numero: %d es: %s su DNI es %s, cuya edad es %d \n", aux, Malosos[aux].nombre, Malosos[aux].dni, Malosos[aux].edad);
    }

    return 0;
}
