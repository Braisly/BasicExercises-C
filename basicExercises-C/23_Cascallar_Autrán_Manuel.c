/*
Enunciado: programa que permita introducir numeros reais hasta introducir 0 que nos dará cantos numeros se introduciron, 
a sua suma, cal e o maior e cal é o menor.
Autor: Manuel Cascallar Autrán
Data: 09-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 23_Cascallar_Autrán_Manuel");
    system("color 88");
    system("cls");
    printf("CANTIDADE DE NUMEROS, A SUA SUMA E MENOR E MAIOR\n");
    printf("================================================\n");
    //declaramos as variables
    int b;
    float a,resultado,menor, maior,z;
    
    
    
    printf("Introduce os n\243meros:\n");
    scanf("%f",&a);
    maior=a;
    menor=a;
    b=1;              
    resultado=a;
              do{
                 
                  scanf("%f",&a);
                  
                  z=a;
                  resultado=resultado+a;//suma de tódolos números introducidos
                  b=b+1;
                  if(z>maior && z!=0){
                              maior=z;
                            }
                  if(z<menor && z!=0){
                              menor=z;
                              }
                  
                  }while(a!=0);//funciona este do while ata que a sexa igual a 0
                  
          
          
           
          b=b-1;//restamoslle o contador 1 porque o 0 non o queremos contar
          printf("A cantidade de n\243meros introducida \202:\n");
          printf("%d\n",b);
          
          printf("O resultado da suma de t\242dolos n\243meros introducidos \202:\n");
          printf("%.2f\n",resultado);
          
          printf("O n\243mero menor \202:\n");
          printf("%.2f\n",menor);
          
          printf("O n\243mero maior \202:\n");
          printf("%.2f\n",maior);
    
system ("pause");    
}
