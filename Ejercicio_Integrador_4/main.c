#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

¿Qué tipo de métodos de ordenamiento conoce? Explique virtudes
y desventajas de los métodos que ha mencionado.
Elija uno de esos métodos, prográmelo y utilícelo para ordenar un Empleados
por apellido, sobre un total de 25 Empleados, diagramados una estructura.

Conosco 4: Burbuja, Shell, Insercion y Seleccion

BURBUJA: Es el más simple pero a la vez el menos performante de todos

SHELL:

    El Shell sort es una generalización del ordenamiento por inserción, teniendo en cuenta dos observaciones:

    El ordenamiento por inserción es eficiente si la entrada está "casi ordenada".
    El ordenamiento por inserción es ineficiente, en general, porque mueve los valores
    sólo una posición cada vez.
    El algoritmo Shell sort mejora el ordenamiento por inserción comparando elementos
    separados por un espacio de varias posiciones. Esto permite que un elemento haga
    "pasos más grandes" hacia su posición esperada. Los pasos múltiples sobre los datos
    se hacen con tamaños de espacio cada vez más pequeños. El último paso del Shell sort
    es un simple ordenamiento por inserción, pero para entonces,
    ya está garantizado que los datos del vector están casi ordenados.

    INSERCION

        Requiere O(n²) operaciones para ordenar una lista de n elementos.
        Inicialmente se tiene un solo elemento, que obviamente es un conjunto ordenado.
        Después, cuando hay k elementos
        ordenados de menor a mayor, se toma el elemento k+1 y se compara con todos los
        elementos ya ordenados, deteniéndose
        cuando se encuentra un elemento menor (todos los elementos mayores han sido
        desplazados una posición a la derecha) o cuando ya no se encuentran elementos
        (todos los elementos fueron desplazados y este es el más pequeño). En este punto se inserta
        el elemento k+1 debiendo desplazarse los demás elementos.

    SELECCION

        Su funcionamiento es el siguiente:

        Buscar el mínimo elemento de la lista
        Intercambiarlo con el primero
        Buscar el siguiente mínimo en el resto de la lista
        Intercambiarlo con el segundo
        Y en general:

        Buscar el mínimo elemento entre una posición i y el final de la lista
        Intercambiar el mínimo con el elemento de la posición i

        Otra desventaja de este algoritmo respecto a otros como el de burbuja o de
        inserción directa es que no mejora su
        rendimiento cuando los datos ya están ordenados o parcialmente ordenados.
*/

struct Empleado
{

    char nombre [80];
    char apellido [80];
    int dni;

};

typedef struct Empleado Empleados;

Empleados Wetcom[20];

void menucargar()
{

    int i = 0;
    char negativo[10];

    while(i!=20)
    {


        printf("\nDesea cargar mas empleados, escribir NO para salir: ");
        gets(negativo);
        if(strcmp(negativo,"NO")==0)
        {
            break;
        }
        fflush(stdin);
        printf("\nCargar nombre: ");
        gets(Wetcom[i].nombre);
        fflush(stdin);
        printf("\nCargar apellido: ");
        gets(Wetcom[i].apellido);
        fflush(stdin);
        printf("\nCargar DNI: ");
        scanf("%d",&Wetcom[i].dni);
        fflush(stdin);

        i++;

    }

        printf("\nLa lista tiene un largo de %d", (sizeof(Wetcom)/sizeof(Empleados)));

};

void ordenar_burbuja()
{
    int i,j,aux=0;
    Empleados Wetcom_aux;

    for(i=0; i<=20; i++)
    {

        for(j=0; j<20; j++)
        {


            if(Wetcom[j].dni>Wetcom[j+1].dni)
            {
                Wetcom_aux = Wetcom[j];
                Wetcom[j] = Wetcom[j+1];
                Wetcom[j+1] = Wetcom_aux;

            }


        }

    }

}

int main()
{
    int i;
    menucargar();
    ordenar_burbuja();

    for( i=0; i<3; i++)
    {
        printf("\n%d",Wetcom[i].dni);
    }

    return 0;
}
