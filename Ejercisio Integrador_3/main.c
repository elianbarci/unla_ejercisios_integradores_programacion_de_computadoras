#include <stdio.h>
#include <stdlib.h>

struct Empleados {
    char nombre[80];
    char apellido[80];
    char dni[80];
    int ingreso;
    int sueldo;
    char genero[20];
    int numempleado;
    int cantidad_hijos;

};

typedef struct Empleados Empleado;

int main()
{
    /*Se quiere  guardar el registro  de  empleados  de una  empresa, se sabe que  en la  empresa
hay  como  mucho  50  empleados.  Nos  interesa  guardar el nombre,  apellido,  dni,  año  de
ingreso,  sueldo,  genero,  numero  de  empleado  y  cantidad  de  hijos  de  cada  empleado.
Crear  la  o  las  estructuras  necesarias  para  realizar  esto.    Una  vez  creadas  realizar  un
procedimiento que permita cargar un empleado.

¿Qué tipo de métodos  de ordenamiento conoce? Explique virtudes y desventajas de los
métodos  que  ha  mencionado.  Elija  uno  de  esos  métodos,  prográmelo  y  utilícelo  para
ordenar un Empleados  por apellido,  sobre  un  total  de  25 Empleados,  diagramados  una estructura.

*/
    Empleado Wetcom[50];
    int contador = 0;
    int aux = 0;
    int i,j;
    while(contador<25){
    printf("Hay un total de %d empleados cargados\n", contador);
    menucargar(Wetcom[contador]);
    contador++;
    }

    for(i = 0; i < 25; i++){
        for(j = 0; j < 25; j++){
            if(Wetcom[j].numempleado > Wetcom[j+1].numempleado){

                    aux = Wetcom[j].numempleado;
                    Wetcom[j+1].numempleado = Wetcom[j].numempleado;
                    Wetcom[j+1].numempleado = aux;

            }
        }
    }

    return 0;
}

void menucargar(Empleado x){

    printf("Cargar nombre: ");
    gets(x.nombre);
    fflush(stdin);
    printf("\nCargar apellido: ");
    gets(x.apellido);
    fflush(stdin);
    printf("\nCargar DNI: ");
    gets(x.dni);
    fflush(stdin);
    printf("\nCargar año de ingreso: ");
    scanf("%d", &x.ingreso);
    fflush(stdin);
    printf("\nCargar sueldo: ");
    scanf("%d", &x.sueldo);
    fflush(stdin);
    printf("\nCargar genero: ");
    gets(x.genero);
    fflush(stdin);
    printf("\nCargar numero de empleado: ");
    scanf("%d", &x.numempleado);
    fflush(stdin);
    printf("\nCargar cantidad de hijos: ");
    scanf("%d", &x.cantidad_hijos);
    fflush(stdin);

};





