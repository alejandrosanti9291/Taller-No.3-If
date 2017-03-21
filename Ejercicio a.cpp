/*
Nombre del prigrama: Comparación de dos numeros.
Autor: Alejandro Santibañes Sanchez.
Fecha: 01/03/2017.
Resumen: Programa que compara dos numeros e indica cual de estos es el mayor.
*/

#include<stdio.h>

int main(){
    int Num1, Num2;

    printf("Ingrese un numero \n");
    scanf("%d",&Num1);
    printf("Ingrese otro numero \n");
    scanf("%d",&Num2);

    if(Num1 > Num2){
        printf("El mayor es %d \n",Num1);
    }
    else{
       printf("El menor es %d \n",Num2);
    }
return 0;
}


