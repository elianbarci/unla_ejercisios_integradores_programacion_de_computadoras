#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*

En  una  matriz  se  guarda  la  cantidad  de  lluvia  acumulada  en  milímetros  para  tres
localidades  para  cada  uno  de  los  12  meses.  Crear  un  programa  que  permita  cargar  la
matriz por teclado y luego de esto que calcule la cantidad de milímetros que han caído en
todo el año para cada localidad y que permita saber cuanto llovió por mes contando las 3
localidades

*/
int matriz[3][12];  //Declare la matriz como una variable global porque no puedo mandar una matriz en forma de puntero en C

void leer_archivo (FILE* archivo)
{
    char lectura[100];
    fgets(lectura,100,archivo);
    while(!feof(archivo))
    {
        fputs (lectura, stdout);
        fgets(lectura,100,archivo);
    }
}

void elegir_opcion(int *mes, int *localidad)
{
    int milimetros = 0;
    char aux;
    printf("\nBienvenido usuario, espero que se encuentre bien\n");
    printf("\nQue mes desea elegir?\n");
    printf("\n      T de Temperley");
    printf("\n      A de Adrogue, lugar conocido porque vivio Borges");
    printf("\n      M de Marmol\n");
    printf("\n      S de salir");
    printf("\n\nBasta de chachara elija una opcion YA: ");
    scanf("%s", &aux);
    fflush(stdin);

    switch(aux)
    {
    case 'T':
        *localidad = 1;
        printf("\n    Excelente decision!\n");
        *mes = elegir_mes(mes);
        printf("\n          Procesando pedido de cuanto llovio en Temperley que es la localidad %d en el mes %d: ", *localidad, *mes);
        cargar_milimetros(mes,localidad);
        elegir_opcion(mes, localidad);

        break;
    case 'A':
        *localidad = 2;
        printf("\n\n    Yo tambien respeto mucho al maestro");
        *mes = elegir_mes();
        printf("\n          Procesando pedido de cuanto llovio en Adrogue que es la localidad %d en el mes %d: ", *localidad, *mes);
        cargar_milimetros(mes,localidad);
        elegir_opcion(mes, localidad);

        break;
    case 'M':
        *localidad = 3;
        printf("\n\n    Haga lo que usted quiera!");
        *mes = elegir_mes();
        printf("\n          Procesando pedido de cuanto llovio en Marmol que es la localidad %d en el mes %d", *localidad, *mes);
        cargar_milimetros(mes,localidad);
        elegir_opcion(mes, localidad);

        break;
    case 'S':
        printf("\nUsted selecciono salir");
        return 0;

    default:

        printf("\nACASO ES USTED IMBECIL...\n");
        elegir_opcion(mes, localidad);

    }


}

int elegir_mes(int * mes)
{
    printf("\nEn que mes desea trabajar, elegir numero del 1 al 12: ");
    scanf("%d", &mes);
    fflush(stdin);
    return mes;
}

void cargar_milimetros(int * mes, int * localidad){

    int milimetros;
    printf("\n\nCuantos milimetros ---->  ");
    scanf("%d", &milimetros);
    fflush(stdin);
    matriz[*localidad][*mes] = milimetros;

    printf("\nLocalidad cargada: %d", *localidad);
    printf("\nMes cargados: %d ", *mes);
    printf("\nMilimetros cargados: %d", matriz[*localidad][*mes]);

}

void recorrer_matriz(){
    int i=0,j=0, aux=0;
    for(i=0;i<=3;i++){
        for(j=0;j<=12;j++){
                aux = matriz[i][j] + aux;

        }
    }
    printf("\n\nTOTAL LLOVIO EN TODAS LAS LOCALIDADES DE TODO EL AÑO: %d", aux);
}


int main()
{
    //Se crea una matriz 3 localidades, y 12 meses
    int mes, localidad, milimetros;
    FILE* archivo;      //Se crea el puntero al archivo
    char* nombrearchivo = "titulo.txt"; //Se crea el puntero al nombre del archivo
    archivo = fopen(nombrearchivo, "r");    //Se abre el archivo en modo solo lectura
    /* Esto solo esta para que lea el archivo de los graficos ASCII*/

    leer_archivo(archivo);  //Se llama a la funcion leer archivo que va a el el .txt del titulo ASCII

    elegir_opcion(&mes, &localidad);  //Se llama a la función elegir opcion


    recorrer_matriz();


    return 0;
}


/*

https://lambda.inf.ucv.cl/funprog/apuntes/U3_5_Punteros_Y_Funciones.html

Puntero: un puntero es un tipo de dato que representa las direcciones de memoria que
apuntan a una variable específica. Cada puntero apunta a un tipo de dato específico.
O al revés, cada tipo de dato tiene un puntero como tipo de dato asociado. Cuando hablamos
de puntero nos referimos a cualquier puntero en general. Pero en el código, siempre debemos
hablar de puntero a..., y especificar a qué tipo de dato está asociada la dirección de memoria
almacenada en el puntero.


*/
