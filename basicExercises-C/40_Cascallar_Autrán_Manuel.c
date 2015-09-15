/*
Enunciado: ordenar numeros por metodo selección
Autor: Manuel Cascallar Autrán
Data: 2-12-2009
*/


#include<stdio.h>
#include<stdlib.h>


int main(){
    //encabezamento
    system("title 41_Cascallar_Autrán_Manuel");
    system("color 1F");
    system("cls");
    printf("METODO SELECCION\n");
    printf("=================\n");
    
    //declaramos as variables
    int a[10], x, menor, m, n, z; 
    
    for(x=0;x<10;x++){
                      scanf("%d",&a[x]);
                      }
                      
    menor=a[0];
    m=0;
    printf("\n");
    
    for(n=0;n<9;n++){
                      for (x=n+1;x<10;x++){
                                         if (a[x]<menor){ m=x; menor=a[x]; } 
                                         if (menor==a[n]) m=n;
                                         }
                                         
                                         z=a[m]; 
                                         a[m]=a[n]; 
                                         a[n]=z;
                                         menor=a[n+1];
                                         m=n;
        }

    printf("\n");
    for(n=0;n<10;n++){
          printf("%d\n",a[n]);
          }
    
    printf("\n");
system ("pause");    
}
