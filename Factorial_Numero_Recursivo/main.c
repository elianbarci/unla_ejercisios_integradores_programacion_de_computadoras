#include <stdio.h>
#include <stdlib.h>

//Una funci�n recursiva es una funci�n que se llama a si misma.
//El caso m�s com�n es hallar el factorial de un n�mero.

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


