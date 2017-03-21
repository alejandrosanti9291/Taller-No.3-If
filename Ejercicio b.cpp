/*
Nombre del programa: Comaparación de tres números.
Autor: Alejandro Santibañes Sanchez.
Fecha: 01/03/2017
Resumen: Programa que toma tres numeros y nos dice cual de estos es el mayor.
*/

#include<stdio.h>

int main(){
    int n1, n2, n3;

    printf("Ingrese un primer numero \n");
    scanf("%d", &n1);
    printf("Ingrese un primer numero \n");
    scanf("%d", &n2);
    printf("Ingrese un primer numero \n");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3 ){
        printf("El numero mayor es %d",n1);
        }else if(n2 > n1 && n2 > n3){
            printf("El numero mayor es %d",n2);
        }else if(n3 > n1 && n3 > n2){
            printf("El numero mayor es %d",n3);
    }
    return 0;
}

