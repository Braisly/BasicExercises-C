/*
Enunciado: indicar se un número enteiro introducido por teclado é par ou impar.
Autor: Manuel Cascallar Autrán
Data:8-10-2009          
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title Número par ou impar");
    system ("color 80");
    system ("cls");
    printf("NUMERO PAR OU IMPAR:\n");
    printf("===================\n");
    int a,b;
    printf("N\243mero:\n");//Escribimos a palabra "número"
    scanf("%d", &a);//escribimos o número
    b = a%2;
    if (b==0){//si o número é par escribimos "o número é par"
    printf("O n\243mero %d \202 par.\n",a);
}
    else{//si o número é impar escribimos "o número é impar"
    printf("O n\243mero %d \202 impar.\n",a);
}
system ("pause");
return 0;
}
    
    
