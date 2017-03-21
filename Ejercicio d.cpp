/*
Nombre del programa: Positivo o negativo.
Autor: Alejandro Santibañez Sanchez.
Fecha: 01/03/2017.
Resumen: Un programa que al tomar un numero arroja si es positivo o negativo.
*/

#include<stdio.h>

int main(){
    int Num;

    printf("Ingrese un numero \n");
    scanf("%d",&Num);

    if(Num > 0){
        printf("%d es positivo",Num);

    }else{
        printf("%d es negativo",Num);

    }
return 0;
}
