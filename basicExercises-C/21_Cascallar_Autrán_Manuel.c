/*
Enunciado: programa que permite escribir caracteres e vainos collendo e no momento que poñamos un punto deixa de 
coller caracteres e di cantos caracteres collemos.
Autor: Manuel Cascallar Autrán
Data: 05-11-2009
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    system ("title 21_Cascallar_Autrán_Manuel");
    system("color 88");
    system("cls");
    
    printf("CARACTERES ATA O PUNTO FINAL\n");
    printf("============================\n");
    
    char a;
    int b;
    b=0;
    
    printf("Introduce os caracteres:\n");
    
    while( a!='.'){
         a=getche();
          b++;
         }
         
    b--;     
    printf("O n\243mero de caracteres escritos son:\n");
    printf("%d",b);
    printf("\n\n");
    
    
    
    
system ("pause");    
}
