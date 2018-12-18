#include <stdio.h>
#include <stdlib.h>

//Una función recursiva es una función que se llama a si misma.
//El caso más común es hallar el factorial de un número.

long factorial(long numero){

    if(numero<=1){

            return 1;

    } else{

    return(numero*factorial(numero-1));

    }

};

int main()
{

    long numero;

    printf("Dijite un numero: ");

    scanf("%ld", &numero);

    printf("\nLa multiplicacion de sus factoriales es: %ld", factorial(numero));

    return 0;

}


