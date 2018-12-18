#include <stdio.h>
#include <stdlib.h>

/*Cree  un  procedimiento  recursivo  que  escriba  en  un  archivo  todos  los  números  que  se
encuentren entre int n1 e int n2.*/

void procedimiento_recursivo (FILE* archivo, int x, int y)
{

    while(x<y)
    {

        x++;
        fprintf(archivo, "Numero siguiente: %d \n", x);
        fflush(stdin);

    }
}

void leer_archivo (FILE* archivo)
{
    char lectura[100];
    fgets(lectura,100,archivo);
    while(!feof(archivo)){
    fputs (lectura, stdout);
    fgets(lectura,100,archivo);
    }
}

int main()
{
    FILE* archivo;
    int n1=100, n2=200;
    char* nombrearchivo = "archivo.txt";
    archivo = fopen(nombrearchivo, "w+");
    procedimiento_recursivo(archivo,n1,n2);
    fclose(archivo);
    archivo = fopen(nombrearchivo, "r");
    leer_archivo(archivo);
    fclose(archivo);
    return 0;
}


