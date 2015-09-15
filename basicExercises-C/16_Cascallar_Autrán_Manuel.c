/*
Enunciado:Escribir o meu nome tantas veces como queira
Autor: Manuel Cascallar Autrán
Data:28-10-2009
*/


#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title 16_EscribirOMeuNomeTantasVecesComoQueira_Cascallar_Autrán_Manuel");
    int a,b;
    printf ("Introduce o n\243nero de veces que queiras que apareza o teu nome:\n");
    scanf("%d",&a);
    if (a<=0){printf ("Con este n\243mero non se pode facer o bucle. Deb\241as escribir un n\243mero positivo\n");
    }
    
    
    for(b=0;b<a;b=b+1){
        printf ("Manuel Cascallar Autr\240n\n");
        }
        
         
             

system ("pause");
}
