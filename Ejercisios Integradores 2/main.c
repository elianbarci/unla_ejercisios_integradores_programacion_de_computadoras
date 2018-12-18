#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int v[N] = {10,20,30,40,100,60,10,80,90,100}; //Se declara un vector
    int x = 1;
    int *puntero = &x;  //Un puntero que apunta a la posicion x

    while(x<N){

        v[x] = 0;
        x++;
        x = (*puntero) * (*puntero);

    }

    for(x = N - 1; x >= 0; x--){

        if(v[x] == 0){

            v[x] = v[x-1] + v[x+1];

            }

            for(x=N-1;x>=0;x--){

                printf("%d", v[x]);

            }

        }

//1009080106004030010

return 0;
}
