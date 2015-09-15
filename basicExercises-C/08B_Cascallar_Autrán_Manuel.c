/*
Enunciado: programa para ordenar tres números reais de menor a maior.
Autor: Manuel Cascallar Autrán
Data: 9-10-2009         
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title Programa para ordenar tres números reais de menor a maior");
    system ("cls");
    system ("color 89");    //cambiamos o color da pantalla e da fuente.
    printf("ORDENAR OS TRES NUMEROS DE MENOR A MAIOR:\n"); //poñemoslle un título o programa
    printf("========================================\n");
    
    float a,b,c;
    
    //Escribimos o primeiro número
    printf("Escribimos o primeiro n\243mero:\n");
    scanf("%f",&a);
    
    //Escribimos o segundo número
    printf("Escribimos o segundo n\243mero:\n"); 
    scanf("%f",&b);
    
    //Escribimos o terceiro número
    printf("Escribimos o terceiro n\243mero:\n");
    scanf("%f",&c);
    //Operacións
    float aux;
    if (a>b){
             aux=a;
             a=b;
             b=aux;
             }
             if (b>c){
                      aux=c;
                      c=b;
                      b=aux;
                      }
                      if (a>b){
                               aux=a;
                               a=b;
                               b=aux;
                               }
                               printf ("%.2f\n",a);
                               printf ("%.2f\n",b);
                               printf ("%.2f\n",c);
    system ("pause");
    return 0;
}
