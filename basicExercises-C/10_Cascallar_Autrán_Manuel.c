/*
Enunciado: Programa no que introducimos un n�mero enteiro, e si o n�mero est� entre 1 e 10 vai escribir o nome dese n�mero, e si non
est� entre 1 e 10 que escriba "Non sei escribir o nome deste n�mero".
Autor: Manuel Cascallar Autr�n
Data: 13-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system ("cls");
    system ("title 10_N�meros e letras_Cascallar_Autr�n_Manuel");
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
