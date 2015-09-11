/*
Descrición: Introduces tecla dache o seu carácter ASCII.
Autor: Brais L.Y.
Data: 01-02-2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    
    system ("title Programa tecla valor ASCII - Brais L.Y.");
    system ("color 0A");
    
    printf ("----------------------------------------------");
    printf ("\n                  ASCII                       "); 
    printf ("\n----------------------------------------------");
    unsigned char c, d;
    printf ("\n\nPulsa unha tecla 2 veces ou 1 e douche o valor ASCII: ");
    c=getch();
    d=getch();
    printf("\n%d\n", c);
    if (d!=c) printf ("%d\n", d);
    system ("pause");
}    
