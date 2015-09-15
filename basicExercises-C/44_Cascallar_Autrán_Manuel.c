/*
Enunciado: facer unha funcion a que lle pasaremos a direccion dunha cadea e o codigo ascii dun caracter e nos vai a 
devolver cantas veces aparece ese caracter na cadea.
Autor: Manuel Cascallar Autrán
Data: 15-01-2010
*/

#include<stdio.h>
#include<stdlib.h>


//funcion
char ContarCaracter(char *x,char b){
     int cont=0;
     while(*x!=0){
                        if(*x==b) cont++;
           x++;
           }
     return cont;
     }


//encabezamento
int main(){
    system("title 44_Cascallar_Autrán_Manuel");
    system("color F1");
    system("cls");
    printf("NUMERO DE VECES QUE APARECE UN CARACTER NUNHA CADEA\n");
    printf("===================================================\n");
    
    //declaracion de variables
    char cadea[100];
    char b;
    int conta;
    
    //introducese a cadea de caracteres
    printf("Introduce unha cadea de caracteres:\n");
    gets(cadea);
    
    //introducese o caracter do que interesa saber o numero dese tipo que aparecen na cadea
    printf("\nIntroduce o caracter que che interesa:\n");
    b=getche();
    
    
    //imprime o resultado 
    conta=ContarCaracter(cadea, b);
    printf("\nO n\243mero de veces que aparece o caracter %c  na cadea \202: %d \n", b, conta );
    
    
system("pause");    
}
