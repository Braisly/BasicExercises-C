/*
Enunciado: programa que calcule o factorial de un número que introducimos desde 0 a 12. Factorial de 3:(/1*1/1*2/1*3);
 de 0:(0*1)
Autor: Manuel Cascallar Autrán
Data: 13-11-2009
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
    system("title 28_Cascallar_Autrán_Manuel");
    system("color 0A");
    system("cls");
    printf("CALCULO DO FACTORIAL DUN NUMERO\n");
    printf("===============================\n");
    int a, resultado, i, num[12];
    printf("Introduce o n\243mero \242 que lle vas a calcular o factorial (entre 0 e 12, ambos incluidos):\n");
    scanf("%d",&a);
    
    resultado=1;
    if(a==0){printf("\nO factorial de %d \202:\n",a);
             printf("1\n");
       
    }
                else if(a>0 && a<=12){    
                     for(i=0;i<=a;i++){
                     
                                       num[i]=i+1;
                                       }
                                       for (i=0;i<a;i++){
                             
                             
                                       resultado = resultado* num[i];
                             
                             
                             
                                                              }
          
                     
                     
                     printf("\nO factorial de %d \202:\n",a);
                     printf("%d\n",resultado);
                     }
                     else {
                          printf("O numero introducido non \202 valido\n");   
                     
                     }
system("pause");    
}
