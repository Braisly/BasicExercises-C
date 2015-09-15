/*
Enunciado: ordenar numeros por metodo de insercción
Autor: Manuel Cascallar Autrán
Data: 2-12-2009
*/

#include<stdio.h>
#include<stdlib.h>


int main (){
    //encabezamento
    system ("title 40_Cascallar_Autrán_Manuel");
    system ("color 1F");
    system ("cls");
    printf("METODO DE INSERCCION\n");
    printf("===================\n");
    
    //declaración de variables
    int a[10], z, x, n;
    
    //introducimos os valores
    printf("Introduce os valores:\n");
    for(x=0;x<10;x++){
                     scanf("%d",&a[x]);
                     }
                     
    //colocamos os numeros no seu sitio                 
     
     for(x=0;x<9;x++){
                      for(n=x;n<9;n++){
                                       if (a[n+1]<a[x]){ z=a[n+1]; 
                                       a[n+1]=a[x]; 
                                       a[x]=z;
                                                         }
                                       }
                      }
          
    //imprimimos os valores xa ordenados      
    for(x=0;x<10;x++){
                     printf("\n%d\n",a[x]);
                     }
    printf("\n");
    
    
system("pause");    
}
