#include <stdio.h>
#include <stdlib.h>

/*Lea de un archivo todas las frases guardadas renglón por renglón. Muéstrelas por pantalla.
Y dicha cuantas veces aparece la letra A en cada renglón.*/

int main()
{
    FILE* archivo;
    char* nombrearchivo = "archivo.txt";
    archivo = fopen(nombrearchivo, "r");
    char lectura [100];
    int endoffile = 0;
    int cantidad;
    if(archivo == NULL) return -1;

    printf("Lectura: \n\n");
    fgets(lectura, 100, archivo);
    while (!feof(archivo))
    {
        cantidad = strlen(lectura);
        printf("        Cantidad de letras A: %d \n", analizar_renglon(lectura, cantidad));
        printf("\n            %s \n", lectura);
        fgets(lectura, 100, archivo);

    }
    printf("        Cantidad de letras A: %d \n", analizar_renglon(lectura, cantidad));
    printf("\n            %s \n", lectura);
    printf("\nFin del archivo");

    fclose(archivo);

    return 0;
}

int analizar_renglon(char x[], int cantidad)
{
    int cantidad_total = 0, aux=0;
    while(aux<cantidad)
    {
        if(x[aux] == 'a' || x[aux] == 'A')
        {
            cantidad_total++;
            aux++;
        }
        else
        {
            aux++;
        }
    }
    return cantidad_total;
}

