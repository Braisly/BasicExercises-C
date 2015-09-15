/*
Enunciado: lemos un caracter do teclado e escribeo 
Autor: Manuel Cascallar Autrán
Data: 29-10-2009
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (){
    system("title 17_LerUnCaracterEEscribilo_Cascallar_Autrán_Manuel");
    printf ("LER UN CARACTER E ESCRIBILO\n");
    printf ("===========================\n");
    printf ("Escribe o caracter:\n");
    unsigned char caracter,a;  
     caracter=getch();
    for( caracter=0; a<10 ;a=a+1){
    
    printf("\nO caracter introducido \202:%c\n",caracter);
    
    }
    system("pause");
}
