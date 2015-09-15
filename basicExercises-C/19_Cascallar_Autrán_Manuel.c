/*
Enunciado: Usar un bucle para mover un asterisco.
Autor: Manuel Cascallar Autrán
Data: 30-10-2009
*/
#include<stdio.h>
#include<stdlib.h>


int main (){
    
    system("color 27");
    system("title 17_MoverUnAsterisco_Cascallar_Autrán_Manuel");
    system("cls");
    printf ("MOVER UN ASTERISCO\n");
    printf ("==================\n");
    int n,a;//declaramos as variables
    system("cls");
    for(n=0;n<23*80;n++){
        for(a=0; a<n; a++){
        printf(" ");
    }
        printf ("*");
        system("cls");
}
    system("pause");
}
                
