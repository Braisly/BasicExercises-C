/*
Enunciado: calcular a suma de cinco números enteiros introducidos polo teclado
Autor: Manuel Cascallar Autrán
Data: 10-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 24_Cascallar_Autrán_Manuel");
    system("color 88");
    system("cls");
    printf("SUMA DE CINCO NUMEROS INTRODUCIDOS POLO TECLADO\n");
    printf("===============================================\n");
    
    int b;
    float a, resultado;
    resultado=0;
    b=0;
    
    printf("Introduce os cinco n\243meros:\n");
    
    while(b<5){
    scanf("%f",&a);         
             
             
             
             resultado=resultado+a;
             b++;
             }
             printf("O resultado da suma dos cinco n\243meros \202:\n");
             printf("%.2f\n\n",resultado);
    
    
system ("pause");    
}
