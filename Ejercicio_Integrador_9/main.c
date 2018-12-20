#include <stdio.h>
#include <stdlib.h>
/*
¿Qué es un TDA? ¿Qué beneficios tiene utilizarlos? ¿Qué son y para qué sirven los gets
y los sets? Construya un ejemplo simple de TDA.

Para empezar, un TDA son las siglas que definen a un tipo de dato abstracto. En ingles puede encontrarsele como
ADT que significa Abstract Data Type

Otro punto muy importante y que tienen que
sabersiempre, es que el TDA es independiente del lenguaje en el que se quiera implementar, es decir, que cierto TDA
puede implementarse en PASCAL,C,C+ +,C#,JAV A, etc.

El TDA surgio para facilitar el trabajo con tipos de datos haciendo abstraccion de la implementacion de los mismos.

Respues clara:  Un TDA o ADT es una coleccion de data, cuyta implementacion esta oculta en las operaciones que la definen.
                Por ejemplo, el FILE definido en la libreria stdio.h es un tipo de dato abstracto, nosotros definimos
                un archivo para la resolución del problema y podemos a acceder a ciertas funciones pero no podemos ver
                la logica algoritmica de dichas funciones que definen el tipo de dato FILE o bien las mismas no nos interesan
                pero si nos podemos hacer valer de ciertas operaciones que estan definidas en el tipo de archivo FILE


Un ejemplo:

There is one ADT that everybody has seen already. Its name is FILE, its specification is part of the C language
definition. The definitions relevant to clients of FILE are in a system header file called <stdio.h>. Operations
over FILE include fopen, fprintf, fgets, etc. However, a quick inspection of /usr/include/stdio.h
(which is the physical location of <stdio.h> on many systems) reveals the following definition for FILE:


*/
int main()
{
    FILE * archivo; //Podemos usar
    char * nombre_de_archivo = "archivo.txt";
    archivo = fopen(nombre_de_archivo, "r");    //POdemos hacernos valer de fopen pero no podemos ver como funciona o bien no nos interesa
    return 0;
}
