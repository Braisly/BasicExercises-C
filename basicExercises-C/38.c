/*
Descrici�n: Escribir os n primeiros n�meros da serie de fibonacci, donde n se introducir� no teclado.
Autor: Brais L.Y.
Data: 01-12-2009
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  
  int numero,a,nume;
  
  //Introducer o n�mero de n�meros que queres
  printf ("Introducir o numero de n\243meros que queres da sucesion de fibonacci:");
  scanf ("%d", &numero);
  nume=0;
  for (a=0;a<numero;a++) {  
                           nume=a+nume;
						   printf ("%d", nume); 
                         }  
                         
  system ("pause");
}  
