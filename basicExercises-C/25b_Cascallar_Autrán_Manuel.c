/*
Enunciado:escribir 10 valores e ordenalos inversamente
Autor: Manuel Cascallar Autrán
Data: 10-11-2009
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
           system("title 25b_Cascallar_Autrán_Manuel");
           system("color 88");
           system("cls");
           printf("ORDENAR 10 VALORES DE FORMA INVERSA A COMO OS ESCRIBIMOS\n");
           printf("========================================================\n");
           
           int i,a[10];
           

           printf("\nIntroduce os n\243meros\n");
           for (i=0;i<10;i++){
           
           scanf("%d",&a[i]);
           printf("\n");
               
               
               }
           printf("O orden dos n\243meros colocados inversamente \202:\n");    
           for(i=9;i>=0;i--){
                 printf("%d",a[i]);
                 printf("\n\n");
                 
                 
                 }
system("pause");
}
