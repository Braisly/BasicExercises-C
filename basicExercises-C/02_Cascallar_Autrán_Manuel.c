/*
Descripción: ler un número e escribir o doble
Autor: Manuel Cascallar
Data: 30-9-2009
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int num; // declaramos a variable onde se vai gardar o numero.
    system("title Doble dun numero");
    system("cls");
    system("color 70"); // cambialle o color a pantalla
    printf("PROGRAMA QUE CALCULA O DOBLE DUN NUMERO\n");
    printf("=======================================\n\n");
    printf("Introduce un numero:    ");
    scanf("%d",&num); // le o número e gardase en num.
    printf("O doble de %d \202 %d",num, num*2); // escribe o doble do número leido
    fflush(stdin); // borra todo o buffer de teclado.
    getchar(); //paramos para que non se nos cerre a ventana do interfaz de comandos
}  

