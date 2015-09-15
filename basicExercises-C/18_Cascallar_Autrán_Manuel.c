/*
Enunciado: facer un cadrado co caracter que introduzca, repetindoo varias veces
Autor: Manuel Cascallar Autrán
Data: 30-10-2009
*/
#include<stdio.h>
#include<stdlib.h>


int main (){
    
    system("color 27");
    system("title 17_FacerUnCadrado_Cascallar_Autrán_Manuel");
    system("cls");
    printf ("CADRADO\n");
    printf ("=======\n");
    int a,b, x;
    printf("Introduce o n\243mero de veces que queres que forme o cadrado:\n");
    scanf ("%d",&x);
    for(a=0; a<x; a++){
                        
                        
                         for( b=0; b<x ;b++){
                                   printf("*");
    
    }
    printf("\n");
}
    
    system("pause");
}
                
