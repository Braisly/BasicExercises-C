/*
Enunciado: programa para que escribindo un n�mero enteiro, si o n�mero est� entre 1 e 7 nos dea un d�a da semana de luns a domingo,
e sinon, nos escriba unha mensaxe dicindo "O n�mero introducido non se corresponde a ning�n d�a da semana".
Autor: Manuel Cascallar Autr�n
Data: 9-10-2009         
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
          system("title Programa para saber que d�a da semana lle corresponde � n�mero escrito");
          system("cls");
          system("color 80");
          printf("\nDIA DA SEMANA CORRESPONDENTE A UN NUMERO:\n");
          printf("========================================\n");
          int a;
              printf("Introduce un n\243mero\n");
              scanf("%i", &a);

if ((a > 7) || (a<1)){
         printf("O n\243mero introducido non corresponde a ning\243n d\241a da semana\n");
              }
         else{
               switch(a){
                          case 1:
                               printf("O d\241a da semana \202 Luns\n");
                               break;
                          case 2:
                               printf("O d\241a da semana \202 Martes\n");
                               break;
                          case 3:
                                printf("O d\241a da semana \202 Mercores\n");
                               break;
                          case 4:
                               printf("O d\241a da semana \202 Xoves\n");
                               break;
                          case 5:
                                printf("O d\241a da semana \202 Venres\n");
                               break;
                          case 6:
                               printf("O d\241a da semana \202 S\240bado\n");
                               break;
                          case 7:
                                printf("O d\241a da semana \202 Domingo\n");
                               break;
                          }   
}
system("pause");
}
