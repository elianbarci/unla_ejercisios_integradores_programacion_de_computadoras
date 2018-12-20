#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Cliente
{

    char nombre[80];
    char apellido[80];
    char dni[80];

};

typedef struct Cliente Clientes;

Clientes Mercedez[25];                                              //Declare la variable de forma global

void cargar_clientes()
{

    int condicional=0;
    char respuesta[10], nombre[80], apellido[80],dni[80], no[10] = {"NO"};  //Para comparar dos strings estos deben tener el mismo largo
    //del array, en realidad no solo para comparar
    //para realicar cualquier operacion entre strings
    int contador = 0;                                                       //deben ser equivalentes en cuanto a ancho de array

    while(condicional<=0)
    {

        printf("\nDesea cargar un cliente? Escriba NO para salir: ");
        gets(respuesta);
        fflush(stdin);

        if(strcmp(respuesta,no) == 0)
        {
            condicional++;
        }
        if (condicional == 0)
        {

            printf("\nIngresar nombre: ");
            gets(nombre);
            strcpy(Mercedez[contador].nombre, nombre);
            printf("\nIngresar apellido: ");
            gets(apellido);
            strcpy(Mercedez[contador].apellido, apellido);
            printf("\nIngresar DNI: ");
            gets(dni);
            strcpy(Mercedez[contador].dni, dni);

            printf("\nAcaba de ingresar al senior %s %s con el DNI: %s\n", Mercedez[contador].nombre,Mercedez[contador].apellido, Mercedez[contador].dni);
        }

    }

}

void buscar_clientes()
{

    bool condicional=false;
    char buscar[80], nombre[80], apellido[80],dni[80];
    int contador=0;

    printf("\nDNI de cliente a buscar: ");
    gets(buscar);

    while(condicional==false)           //Este es el secuencial
    {

        if(strcmp(Mercedez[contador].dni, buscar) == 0)
        {

            printf("\nEl DNI fue encontrado en la posicion %d y le corresponde a %s %s", contador, Mercedez[contador].nombre, Mercedez[contador].apellido);
            break;


        }
        else
        {

            if(contador <25)
            {

                contador++;

            }
            else
            {

                break;

            }

        }


    }
}

int main()
{

    printf("Bienvenido al buscador de Clientes\n");
    cargar_clientes();
    buscar_clientes();
    return 0;
}
