/*
Enunciado: ordenar n�meros por m�todo burbuja de menor a maior
Autor: Manuel Cascallar Autr�n
Data: 1-12-2009
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    //encabezamento
    system("title 39_Cascallar_Autr�n_Manuel");
    system("color 1F");
    system("cls");
    printf("METODO BURBUJA\n");
    printf("==============\n");
    //declaramos as variables
    int a[10], x, z, c=0;
    
    //introducimos os n�meros
    for(x=0;x<10;x++){
          printf("Introduce un n\243mero:\n");
          scanf("%d",&a[x]);
          }
    
    //si un numero � menor que o anterior cambiamolos de posici�n
    for(c=0;c<9;c++){
    for(x=0;x<9;x++){
          if (a[x]>a[x+1]){ z=a[x+1]; 
                            a[x+1]=a[x]; 
                            a[x]=z;}
          }
          }
    printf("\n");
    //imprimimos os numeros co novo orden
    for(x=0;x<10;x++){
          printf("%d\n",a[x]);
          }
    
    
system ("pause");    
}    
    
    
    

