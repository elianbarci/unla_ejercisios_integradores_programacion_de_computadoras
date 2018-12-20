#include <stdio.h>
#include <stdlib.h>

/*

    Dados dos vectores de enteros v1[10] y v2[10] ordenados. Cree un vector v2, donde estén
    todos los enteros de v1 y v2 ordenados. Para esto se pide
    utilizar el apareamiento uno por uno, visto en clase.

*/


int main()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10] = {7,8,9,10,11,12,13,14,15,16};
    int v3[20];
    int i, j, h, k, aux = 0 ;

    for(i=0; i<10; i++)
    {

        v3[i]=v1[i];

        for(j=0; j<10; j++)
        {

            if(v3[i]==v2[j])
            {
                aux++;

            }

        }

    }

            for(h = 0; h < (10-aux); h++)
        {
            v3[10+h]=v2[h+aux];
        }

    for(k=0;k<(20-aux);k++){

        printf("\n%d", v3[k]);

    }


    return 0;
}
