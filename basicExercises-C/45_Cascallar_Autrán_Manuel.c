/*
Enunciado: funcion que lle enviamos unha direccion e un numero que representara un numero de caracteres. a funcion vai 
ler por teclado e gardar a partir da direccion recibida un m�ximo de caracteres co numero de caracteres enviado.
Autor: Manuel Cascallar Autr�n
Data: 18-01-2010
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void funcion(char *dir,int a){
     int  cont=0;
    char x;

    *dir=0;
    while((x!=13)&&(cont<a)){

           *dir=getche();
           cont++;
           x=*dir;
           if(*dir==13){*dir=0;}
           dir++;
           *dir=0;
    }
}

//encabezado
int main(){
    system("title 45_Cascallar_Autr�n_Manuel");
    system("color 1F");
    system("cls");
    printf("CADEA DE CARACTERES CUN MAXIMO DE CARACTERES ESPECIFICADO\n");
    printf("=========================================================\n");
    
    //declaraci�n de variables
    char cadea[100];
    int b;
    int x;
    //introducimos o numero maximo de caracteres
    printf("Introduce o n\243mero maximo de caracteres:\n");
    scanf("%d",&b);
    //introducimos a cadea de caracteres que non ter� m�is caracteres que o m�ximo
    printf("Introduce a cadea de caracteres:\n");
    funcion(cadea,b);
    gets(cadea);
    
    printf("\n");
    for(x=0;x<b;x++){
                     printf("%c",cadea[x]);
    }
    printf("\n");
    
system("pause");    
}
