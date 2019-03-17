#include <stdlib.h>
#include <stdio.h>

int main(){

int variable = 13;

int *puntero = &variable;

printf("El contenido del puntero es %d\n", *puntero);

printf("La direccion de memoria almacenada del puntero es %p\n", puntero);

printf("La direccion de memoria de la variable es %p\n", &variable);

printf("La direccion de memoria del puntero es %p\n", &puntero);

int tamanio = sizeof(variable);

printf("El tamaño de la variable es de %d bits\n", tamanio);


/*El resultado de 2 y 3 es el mismo ya que los punteros apuntan a la direccion de memoria de una variable, por lo cual se
vuelve evidente que deberian ser iguales */

/* En 4 se obtiene directamente la direccion de memoria del puntero, no es igual ya que es la direccion de memoria de
"otra variable" */

return 0;
}
