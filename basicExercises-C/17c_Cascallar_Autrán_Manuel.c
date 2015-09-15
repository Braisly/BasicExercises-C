/*
Enunciado: lemos un caracter do teclado e escribeo un número de veces que queiramos
Autor: Manuel Cascallar Autrán
Data: 30-10-2009
*/
#include<stdio.h>
#include<stdlib.h>


int main (){
    system("title 17_LerUnCaracterEEscribilo_Cascallar_Autrán_Manuel");
    printf ("LER UN CARACTER E ESCRIBILO\n");
    printf ("===========================\n");
    printf ("Escribe o caracter:\n");
    int a, x;
    unsigned char caracter;
    scanf ("%c", &caracter);
    printf("Introduce o n\243mero de veces que queres que se repita:\n");
    scanf ("%i",&x);
    for( a=0; a<x ;a=a+1){
    
    printf("\nO caracter introducido \202: %c \n",caracter);
    
    }
    system("pause");
}
