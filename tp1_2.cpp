#include <stdlib.h>
#include <stdio.h>

/* --- ATENCION, APARTADO i INICIO ---

int cuadrado();

int main(){

    int potencia = cuadrado();

    printf("El cuadrado de su numero es %d", potencia);

return 0;
}

int cuadrado(){

    int valor, potencia;

    printf("Ingrese un numero del que quiera saber su cuadrado\n");

    scanf("%d",&valor);

    potencia = valor*valor;

return potencia;}

 --- ATENCION APARTADO i FIN --- */




 /* --- ATENCION APARTADO ii INICIO ---

void cuadrado();

int main(){

    cuadrado();

    return 0;
}

void cuadrado(){

    int valor, potencia;

    printf("Ingrese un numero del que quiera saber su cuadrado\n");

    scanf("%d",&valor);

    potencia = valor*valor;

    printf("El cuadrado de su numero es %d", potencia);

return;}

 --- ATENCION APARTADO ii FIN ---*/




/* --- ATENCION APARTADO iii INICIO ---

void direccion();

int main(){

    direccion();

return 0;
}

void direccion(){

    int valor;

    printf("Ingrese un valor\n");
    scanf("%d", &valor);

    printf("La variable de valor %d esta en la direccion de memoria %p", valor, &valor);

return;}

 --- ATENCION APARTADO iii FIN --- */




/* --- ATENCION APARTADO iv INICIO ---

void invertir(int a, int b);

int main(){

    int a, b;

    printf("Ingrese un valor a\n");
    scanf("%d", &a);

    printf("Ingrese otro valor b\n");
    scanf("%d", &b);

    invertir(a, b);

return 0;
}

void invertir(int a, int b){

    int auxiliar;

    auxiliar = a;

    a = b;

    b = auxiliar;

    printf("Ahora los valores de las variables estan invertidos a=%d y b=%d", a, b);

return;}

 --- ATENCION APARTADO iv FIN ---*/




/* --- ATENCION APARTADO v INICIO ---

void ordenar(int a, int b);

int main(){

    int a, b;

    printf("Ingrese un valor a\n");
    scanf("%d", &a);

    printf("Ingrese otro valor b\n");
    scanf("%d", &b);

    ordenar(a, b);

return 0;
}

void ordenar(int a, int b){

    if(b < a){
        int auxiliar;
        auxiliar = a;
        a = b;
        b = a;

        printf("Los valores se reacomodaron, el orden creciente es a=%d y luego b=%d", a, b);
    }
    else{
        printf("El orden de los valores es correcto, el orden creciente es a=%d y luego b=%d", a, b);
    }

}

 --- ATENCION APARTADO v FIN ---*/




/* --- ATENCION APARTADO vi INICIO ---

void ordenar(int a, int b);

int main(){

    int a, b;

    char condicion = 'n';

    do{

        printf("Ingrese un valor a\n");
        scanf("%d", &a);

        printf("Ingrese otro valor b\n");
        scanf("%d", &b);

        ordenar(a, b);

        fflush(stdin);

        printf("Desea ingresar otro par de numeros? Y/N\n");

        condicion = getchar();

    } while (condicion != 'n');

return 0;
}

void ordenar(int a, int b){

    if(b < a){
        int auxiliar;
        auxiliar = a;
        a = b;
        b = a;

        printf("Los valores se reacomodaron, el orden creciente es a=%d y luego b=%d\n", a, b);
    }
    else{
        printf("El orden de los valores es correcto, el orden creciente es a=%d y luego b=%d\n", a, b);
    }

return;}

 --- ATENCION APARTADO vi FIN ---*/
