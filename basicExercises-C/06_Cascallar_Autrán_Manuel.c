/*
Enunciado: indicar se un n�mero enteiro introducido por teclado � par ou impar.
Autor: Manuel Cascallar Autr�n
Data:8-10-2009          
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title N�mero par ou impar");
    system ("color 80");
    system ("cls");
    printf("NUMERO PAR OU IMPAR:\n");
    printf("===================\n");
    int a,b;
    printf("N\243mero:\n");//Escribimos a palabra "n�mero"
    scanf("%d", &a);//escribimos o n�mero
    b = a%2;
    if (b==0){//si o n�mero � par escribimos "o n�mero � par"
    printf("O n\243mero %d \202 par.\n",a);
}
    else{//si o n�mero � impar escribimos "o n�mero � impar"
    printf("O n\243mero %d \202 impar.\n",a);
}
system ("pause");
return 0;
}
    
    
