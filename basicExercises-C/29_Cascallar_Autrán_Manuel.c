/*
Enunciado: pidenos un mes e un ano, e nos vai decir os dias que ten ese mes dese ano (crear un vector que teña 
os días que ten un ano); un ano é bisiesto si é multiplo de 4 excepto si é multiplo de 100 pero non de 400
Autor: Manuel Cascallar Autrán
Data: 13-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 19_Cascallar_Autrán_Manuel");
    system("color 0A");
    system("cls");
    printf("DIAS QUE TEN UN MES DENTRO DUN ANO\n");
    printf("==================================\n\n");
    int meses, anos, dias, resto_de_anos_1, resto_de_anos_2, resto_de_anos_3;
    
    
    printf("Introduce o mes:\n");
    scanf("%d",&meses);
    
    printf("Introduce o ano:\n");
    scanf("%d",&anos);
    
    resto_de_anos_1=anos%400;//si o resultado é 0 o ano é bisiesto, e febrero ten 29 días
    resto_de_anos_2=anos%4;//si o resultado é 0, sempre que resto_de_anos=anos%100; !=0 entonces é bisiesto.
    resto_de_anos_3=anos%100;
    
    if(anos>=1582){
                   if (meses==1 || meses==3 || meses==5 || meses==7 || meses==8 || meses==10 || meses==12){
                                printf("Este mes ten 31 d\241as\n");
                                }
                              else  if (meses==4 || meses==6 || meses==9 || meses==11){
                                printf("Este mes ten 30 d\241as\n");
                                
                                             }
                                             else  if (meses==2) if (resto_de_anos_1==0 || (resto_de_anos_2==0 && resto_de_anos_3!=0)){
                                             printf("Este mes ten 29 d\241as\n");
                                 
                                 
                                                          }else printf("Este mes ten 28 d\241as\n");
                   else printf("Este mes non existe\n");
      }else  printf("Neste ano todav\241a non se usaba os calendario gregoriano\n");
system("pause");    
}
