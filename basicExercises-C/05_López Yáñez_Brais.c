/*Descrici�n: Dicir se o n�mero introducido � maior ou menor de 10.
Autor: Brais L.Y.
Data: 06-10-2009
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    
    system ("title MAIOR OU MENOR QUE 10");
    system ("color 18");
    float  numero;
    printf ("Introduce un numero:\n");
    scanf ("%f", &numero);           
    
    
if (numero==10)
{ printf("O numero e igual a 10\n");}


else { //Que facer se � falsa a condici�n


    
    if (numero<10) { 
                   printf ("O numero e menor que 10\n");// Que facer se � certa a condici�n
                   }
    
    
    else {
         printf ("O numero e maior que 10\n");// Que facer se a condici�n � falsa
         }
         
         
}   

system ("pause");
     
}


