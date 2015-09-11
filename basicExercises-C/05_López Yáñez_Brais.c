/*Descrición: Dicir se o número introducido é maior ou menor de 10.
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


else { //Que facer se é falsa a condición


    
    if (numero<10) { 
                   printf ("O numero e menor que 10\n");// Que facer se é certa a condición
                   }
    
    
    else {
         printf ("O numero e maior que 10\n");// Que facer se a condición é falsa
         }
         
         
}   

system ("pause");
     
}


