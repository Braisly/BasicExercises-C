/*
Enunciado: escriba os numeros desde 1 hasta un número que se escriba no teclado
Autor: Manuel Cascallar Autrán
Data: 03-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title 20_Cascallar_Autrán_Manuel");
    system("cls");
    printf("ESCRIBIR TODOS OS NUMEROS DESDE 1 ATA UN NUMERO INTRODUCIDO\n");
    printf("===========================================================\n");
    int a, x;
    printf("Introduce o n\243mero no que rematar\240 o bucle:\n");
    scanf("%d",&a);
    printf("\n");
    if (a>=1){
             
             for (x=1 ;x<=a ;x++ ){
                 printf("%d ",x);    
                 }
          
          }
    else printf("O n\243mero escrito non \202 positivo, polo tanto non \202 valido\n");
    printf("\n");
    system ("pause");
}
