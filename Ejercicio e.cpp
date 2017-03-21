/*
Nombre del programa: Coincidencia numerica.
Autor: Alejandro Santibañez Sanchez.
Fecha: 02/03/2017.
Resumen: Programa que lee tres numero y los compara con un cuarto para saber si coinciden.
*/

#include<stdio.h>
int main(){

    int Num1, Num2, Num3, Num4;
    printf("Ingrese un primer numero \n");
    scanf("%d", &Num1);
    printf("Ingrese un segundo numero \n");
    scanf("%d", &Num2);
    printf("Ingrese un tercer numero \n");
    scanf("%d", &Num3);
    printf("Ingrese un cuarto numero \n");
    scanf("%d",&Num4);

    if(Num4 == Num1 ){
        printf("Coincide con el numero 1 \n");

    }   else if(Num4 == Num2){
            printf("Coincide con el numero 2 \n");

        }     else if(Num4 == Num3){
                printf("Coincide con el numero 3 \n");

            }      else if(Num4!= Num1 && Num4!= Num2 && Num4!= Num3){
                    printf("No coincide con ninguno \n");


                }

   return 0;
    }




