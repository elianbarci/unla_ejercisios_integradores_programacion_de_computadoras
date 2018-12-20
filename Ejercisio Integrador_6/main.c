#include <stdio.h>
#include <stdlib.h>

/*
¿Qué es un TDA? ¿Qué beneficios tiene utilizarlos?
¿Qué son y para qué sirven los gets y los sets? Construya un ejemplo simple de TDA.

Un TDA es un tipo de dato abstracto, es una coleccion de data,
cuya implementacion esta oculta en las operaciones
que la definen.

Un TDA encapsula las declaraciones de data con las operaciones que la definen.

Ofrece cuatro beneficios fundamentales:

Simplicity
ADT's let us express our solutions using the vocabulary of the problem domain,
and the messy translation to the language level is hidden.  Thus our code is simpler
because it is at a higher level of abstraction, and inessential details are hidden.

Maintainability

All the operations and data are encapsulated in one place, so changes are isolated.
We can modify the implementation without altering the public interface thus
limiting the scope of changes.

Reusability

The ADT is a stand-alone component; all the data and operations are bundled together.
Thus it can be reused at the binary level (via import, for example), thereby reducing
the effort need to build upon it.

Integrity

Client programs can't directly modify private fields, thus preventing accidental
changes that could cause errors.

Los gets y los sets son funciones definidas dentro del TDA que permiten en caso del Set
Darle un valor al tipo de dato del TDA

Y en caso de los getters es la funcion definida que nos permite llamar al dato del TDA

Dentro de los Getters y Setters se pueden definir en su implementacion todo tipo de
operaciones con el fin de que con la menor de parametros posibles y la mayor simplicidad
se pueda cargar al TDA facilmente con la informacion pertinente así bien como llamarlo sin más problema.



*/


int main()
{
    printf("Hello world!\n");
    return 0;
}
