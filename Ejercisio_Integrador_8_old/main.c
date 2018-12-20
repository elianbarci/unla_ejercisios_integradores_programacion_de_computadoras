#include <stdio.h>
#include <stdlib.h>

/*

En  una  matriz  se  guarda  la  cantidad  de  lluvia  acumulada  en  milímetros  para  tres
localidades  para  cada  uno  de  los  12  meses.  Crear  un  programa  que  permita  cargar  la
matriz por teclado y luego de esto que calcule la cantidad de milímetros que han caído en
todo el año para cada localidad y que permita saber cuanto llovió por mes contando las 3
localidades

*/

void leer_archivo (FILE* archivo, int* matriz)
{
    int localidad, mes;
    char lectura[100];
    fgets(lectura,100,archivo);
    while(!feof(archivo))
    {
        fputs (lectura, stdout);
        fgets(lectura,100,archivo);
    }
}

void elegir_opcion(int* matriz)
{
    int localidad=0,mes=0;
    char aux;
    printf("\nBienvenido usuario, espero que se encuentre bien\n");
    printf("\nQue mes desea elegir?\n");
    printf("\n      T de Temperley");
    printf("\n      A de Adrogue, lugar conocido porque vivio Borges");
    printf("\n      M de Marmol\n");
    printf("\n      S de salir");
    printf("\n\n    Basta de chachara elija una opcion YA: ");
    scanf("%s", &aux);

    switch(aux)
    {
    case 'T':
        localidad == 1;
        printf("\n Excelente decision!");
        mes == elegir_mes();
        printf("\n Cuanto llovio en Temperley en el mes %d", mes);
        cuanto_llovio(matriz, localidad, mes);
        break;
    case 'A':
        localidad = 2;
        printf("\n Yo tambien respeto mucho al maestro");
        mes = elegir_mes();
        printf("\n Cuanto llovio en Adrogue en el mes %d", mes);
        get(matriz[localidad][mes]);
        break;
    case 'M':
        localidad = 3;
        printf("\n Haga lo que usted quiera!");
        mes = elegir_mes();
        printf("\n Cuanto llovio en Marmol en el mes %d", mes);
        get(matriz[localidad][mes]);
        break;
    case 'S':
        return 0;
    default:
        printf("\nACASO ES USTED IMBECIL...\n");
        elegir_opcion();

    }


}

int elegir_mes()
{
    int mes;
    printf(" \nEn que mes desea trabajar, elegir numero del uno al doce ");
    scanf("%d", &mes);
    return mes;
}

void cuanto_llovio(int* matriz, int localidad, int mes)
{
    double aux;
    bool siono;
    for(int i = 0; i<localidad; i++ )
    {
        for(int j = 0; j<mes; j++)
        {
            aux = aux + matriz[localidad][mes];
        }
    }
    printf("\nDurante el año llovio un total de %d", aux);
    printf("\nDesea cargar un dia de lluvia mas?");
    scanf("%b", &siono);
    if(siono = true)
    {
        elegir_opcion();
    }
    else
    {
        return 0;
    }
}

int main()
{
    int matriz[3][12];
    FILE* archivo;
    char* nombrearchivo = "titulo.txt";
    archivo = fopen(nombrearchivo, "r");




    leer_archivo(archivo);
    elegir_opcion(matriz);





    return 0;
}
