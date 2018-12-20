#include <stdio.h>
#include <stdlib.h>

/*

¿Qué tipo  de  métodos  de  búsqueda  conoce?  Explique  virtudes  y
desventajas  de  los métodos  que  ha  mencionado.  Elija  uno  de  esos  métodos  de  búsqueda,
prográmelo  y utilícelo para buscar un Cliente con un determinado DNI, sobre un total de 25 Clientes,
diagramados una estructura.

Hay un total de 5 metodos de busqueda los cuales estan divididos en dos categorias:

    BUSQUEDA INTERNA:

            SECUENCIAL
            BINARIA
            HASH

    BUSQUEDA EXTERNA:

            SECUENCIAL
            BINARIA


*/

void busqueda_binaria(int array [], int dato)           //La secuencia debe estar ordenada
{                                                       //Es mucho más rápida que la busqueda secuencial
    int sup, inf, mitad;
    char bandera = "F";

    inf = 0;
    sup = 10;

    if(dato>sup)
    {
        printf("\nEl dato no se encuentra dentro de la secuencia");
    }
    else
    {

        while(inf<=sup)
        {
            mitad = (inf + sup)/2;

            if(array[mitad]==dato)
            {
                bandera = 'V';
                break;
            }
            if(array[mitad]>dato)
            {
                sup = array[mitad];
                mitad = (inf + sup)/2;
            }
            if(array[mitad]<dato)
            {
                inf = array[mitad];
                mitad = (inf + sup)/2;
            }

        }

        if(bandera == 'F')
        {
            printf("\nEl numero no existe");
        }
        else if (bandera == 'V')
        {
            printf("\nEl numero existe en la posicion %d", mitad);
        }

    }

}

void busqueda_secuencial(int array [], int dato){                       //La secuencia no necesita estar ordenada
                                                                        //Es menos performante
int aux=0, largo=10;
char bandera = 'F';

while(aux<=largo){

        if(array[aux] == dato){

            printf("\nEl dato %d fue encontrado en la posicion %d", dato, aux);
            bandera = 'V';
            break;
        } else{

            aux++;

        }
}

if(bandera=='F'){

    printf("\nEl dato no fue encontrado");
}

}


int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int dato;

    printf("Ingrese su dato a buscar: ");
    scanf("%d", &dato);
    fflush(stdin);

    busqueda_binaria(array,dato);
    busqueda_secuencial(array,dato);


    return 0;
}
