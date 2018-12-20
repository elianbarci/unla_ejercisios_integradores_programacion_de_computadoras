#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

Hacer un programa que realice lo siguiente:
a)  Definir  una  estructura  Temperaturas  definida  por  tres  valores  que  indican,  la
temperatura máxima, la mínima y el día que se registraron.
b) Declarar un vector de 20 elementos de la estructura.
c) Llenarlos con valores aleatorios que van de 0º a 40ºC.
d)  Llamar  a  un  procedimiento  que  muestre  las  temperaturas  del  vector  en  grados Farenheit.
(ºF = ºC*9/5+32).
e) Mostrar el día con la mínima más baja y el de la máxima más alta.

*/

struct Temperatura
{

    char dia[80];
    float maxima;
    float minima;

};

typedef struct Temperatura Temperaturas;

Temperaturas clima[19];

void aleatorio()
{
    int i;
    float maximo, minimo;
    char dia[80];
    for(i=0; i<20; i++)
    {
        sprintf(dia,"%d",i);
        maximo = rand() % 40;
        strcpy(clima[i].dia,dia );

        maximo =   (rand()/(float)(RAND_MAX)) * 40;
        minimo =   (rand()/(float)(RAND_MAX)) * 40;

        while(maximo<minimo)
        {
            maximo =     (rand()/(float)(RAND_MAX)) * 40;
            minimo =    (rand()/(float)(RAND_MAX)) * 40;
        }
        clima[i].maxima = maximo;
        clima[i].minima = minimo;

        printf("\nPara el dia %s, hubo una maxima de %.2f y una minima de %.2f de grados Celcius\n", clima[i].dia,clima[i].maxima,clima[i].minima);


    }

}

void farenheit()
{

    float grados_maximo=0.0, grados_minimo=0.0;
    int i;
    float aux_maximo=0.0;
    float aux_minimo=100.0;
    char aux_maximo_dia[80];
    char aux_minimo_dia[80];
    for(i=0; i<20; i++)
    {

        grados_maximo = (clima[i].maxima)*9/5+32;
        grados_minimo = (clima[i].minima)*9/5+32;
        printf("\nPara el dia %s, hubo una maxima de %.2f y una minima de %.2f de grados Farenheit\n", clima[i].dia,grados_maximo,grados_minimo);


        if(grados_maximo>=aux_maximo)
        {
            aux_maximo = grados_maximo;
            strcpy(aux_maximo_dia,clima[i].dia);

        } else
        if(grados_minimo <= aux_minimo)
        {
            aux_minimo = grados_minimo;
            strcpy(aux_minimo_dia,clima[i].dia);

        }

    fflush(stdin);

    }

    printf("\nEl dia mas caluroso fue el %s con una temperatura maxima de %.2f", aux_maximo_dia, grados_maximo);
    printf("\nEl dia mas frio fue el %s con una temperatura minima de %.2f", aux_minimo_dia, grados_minimo);
}


int main()
{
    aleatorio();
    farenheit();



    return 0;
}
