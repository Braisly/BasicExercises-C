/*
Enunciado: Programa no que introducimos un número enteiro, e si o número está entre 1 e 10 vai escribir o nome dese número, e si non
está entre 1 e 10 que escriba "Non sei escribir o nome deste número".
Autor: Manuel Cascallar Autrán
Data: 13-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system ("cls");
    system ("title 10_Números e letras_Cascallar_Autrán_Manuel");
    system ("color 80");
    int a;
    printf ("Introduce un n\243mero\n");
    scanf ("%i", &a);
    
    switch (a){
               case 1:
                    printf ("Un\n");
                    break;
               case 2:
                    printf ("Dous\n");
                    break;
               case 3:
                    printf ("Tres\n");
                    break;
               case 4:
                    printf ("Catro\n");
                    break;
               case 5:
                    printf ("Cinco\n");
                    break;
               case 6:
                    printf ("Seis\n");
                    break;
               case 7:
                    printf ("Sete\n");
                    break;
               case 8:
                    printf ("Oito\n");
                    break;
               case 9:
                    printf ("Nove\n");
                    break;
               case 10:
                    printf ("Dez\n");
                    break;
               default:
               printf ("Non sei escribir o nome dese n\243mero\n");
               
           }
//getchar;
//getchar;
system ("pause");
}
