/*
Enunciado: función que calcule o factorial de un número (numeros ata o 12, si o numero é mayor, ou menor que 0 que devolva un 0)
Autor: Manuel Cascallar Autrán
Data: 25-11-2009
*/

#include<stdio.h>
#include<stdlib.h>
//función factorial
int factorial (int a){
              int c, b;
              c=1;
              if (a>12 || a<1)c=0;
              else for(b=1;b<=a;b++)  c=c*b;
              return c;
    }        
    
    
int main(){
    //encabezamento
    system("title 34_Cascallar_Autrán_Manuel");    
    system("color 1F");
    system("cls");
    printf("FUNCION QUE CALCULA O FACTORIAL DE UN NUMERO\n");
    printf("============================================\n");
   
    //declaramos a variable  
    int num;
    printf("Introduce o n\243mero \242 que lle queres calcular o factorial:\n");
    scanf("%d",&num);//introducimos o numero o que lle calcularemos o factorial
    printf("\n");
    printf("O resultado \202:\n");
      printf("%d\n",factorial(num)); //danos o resultado 
    
    
    
    system("pause");
}    
