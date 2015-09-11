/*
Descrición: Escribir os n primeiros números da serie de fibonacci, donde n se introducirá no teclado.
Autor: Brais L.Y.
Data: 01-12-2009
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  
  int numero,a,nume;
  
  //Introducer o número de números que queres
  printf ("Introducir o numero de n\243meros que queres da sucesion de fibonacci:");
  scanf ("%d", &numero);
  nume=0;
  for (a=0;a<numero;a++) {  
                           nume=a+nume;
						   printf ("%d", nume); 
                         }  
                         
  system ("pause");
}  
