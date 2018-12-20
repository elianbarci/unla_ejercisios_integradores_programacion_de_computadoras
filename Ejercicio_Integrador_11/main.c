#include <stdio.h>
#include <stdlib.h>
/*

Guarde en un archivo todos los números que hay entre un numero n1 y un número n2.

*/

void recorrer(int n1, int n2, FILE * archivo){

while(n1<n2)
{
    n1++;
    if(n1!=n2){
     printf("\n%d", n1);
     fprintf(archivo, "\n%d", n1 );
    }
}



}

int main()
{

    FILE * archivo;
    char * nombrearchivo = "archivo.txt";
    archivo = fopen(nombrearchivo, "w");



    int n1, n2;
    printf("Dale un valor a n1: ");
    scanf("%d", &n1);
    printf("\nDale un valor a n2: ");
    scanf("%d", &n2);

    recorrer(n1,n2, archivo);


    return 0;
}
