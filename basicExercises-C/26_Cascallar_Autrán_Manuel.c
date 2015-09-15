/*
Enunciado: Facer un programa que permita introducir un caracter e danos o seu valor ASCII decimal, octal e hexadecimal.
Autor: Manuel Cascallar Autrán
Data: 11-11-2009
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    system ("title 26_Cascallar_Autrán_Manuel");
    system("color 40");
    system ("cls");
    printf("PROGRAMA PARA DARNOS O VALOR ASCII DECIMAL, OCTAL E HEXADECIMAL\n");
    printf("===============================================================\n");
    
    unsigned char caracter;
    do{
             //ler o caracter
    printf("\n\n\nEscribe un caracter:\n");
    caracter=getche();
    //valor decimal do caracter
    printf("\nO valor ASCII decimal \202:\n");
    printf("%d\n",caracter);
    //valor octal do caracter
    printf("\nO valor ASCII octal \202:\n");
    printf("0%o\n",caracter);
    //valor hexadecimal do caracter
    printf("\nO valor ASCII hexadecimal \202:\n");
    printf("0x%x\n",caracter);
    
    
    }while(caracter!=27);//si pulsas escape, sale o programa
    
    
    
    
    
system ("pause");    
}
