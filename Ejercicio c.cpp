/*
Nombre del programa: Para o impar.
Autor: Alejandro Santibañez Sanchez.
Fecha: 01/03/2017
Resumen: Programa que arroja si el numero es par o impar.
*/

#include<stdio.h>

int main(){
    int Entero;

    printf("Ingrese un numero entero \n");
    scanf("%d", &Entero);

    if(Entero%2==0){
        printf("%d es par",Entero);

    }else{
        printf("%d es impar",Entero);

    }
return 0;
}
