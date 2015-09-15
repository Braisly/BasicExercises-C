/*
Enunciado: escribir en columnas numeros pares ata un número introducido por nos
Autor: Manuel Cascallar Autrán
Data: 03-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
        system("title 20c_Cascallar_Autrán_Manuel");
        system("color 88");
        system("cls");
        printf("NUMEROS PARES EN COLUMNAS ATA UN NUMERO INTRODUCIDO POLO TECLADO\n");
        printf("================================================================\n");
        int a, b, x;
        printf("Introduce o n\243mero no que empeza o bucle:\n");
        scanf("%d",&x);
        printf("Introduce o n\243mero no que rematar\240 o bucle:\n");
        scanf("%d",&a );
        if (x%2==0){
        if (a>=2){
              for (b=x ;b<=a ;b=b+2 ){
                  printf("%-13d",b);
                  if(b%12==0){
                            printf("\n");
                            }
                            
                        
                        
                        
                  
                  }
              
              }
              
        else printf("Os n\243meros introducidos non son validos\n");
             }
        else printf("Os n\243meros introducidos non son validos\n");     
    printf("\n");
    system ("pause");
}
