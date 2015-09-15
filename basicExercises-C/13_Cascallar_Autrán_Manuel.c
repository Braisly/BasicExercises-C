/*
Enunciado:  23.	Ler desde teclado unha cantidade enteira de euros e facer o desglose en billetes e moedas de 100,20,5 e 1 euro
Autor : Manuel Cascallar Autrán
Data: 26-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    system ("title 13_EurosEnBilletesEMoedas_Cascallar_Autrán_Manuel");
    printf ("EUROS EN BILLETES E MOEDAS DE 100, 20, 5 E 1 EUROS\n");//poñemoslle o titulo
    printf ("==================================================\n"); 
    int euros, billete_de_cen, billete_de_vinte, billete_de_cinco, moneda_de_un;// introducimos as variables
        printf ("Introduce a cantidade de euros a desglosar\n");
        scanf ("%d", &euros);       //introducimos o valor da variable "euros"
        //desglosamos en billetes de cen euros
        billete_de_cen = euros / 100;
        printf("%d",billete_de_cen);
        printf(" billetes de cen ,");
        //desglosamos en billetes de vinte euros
        billete_de_vinte = (euros % 100)/ 20;
        printf("%d",billete_de_vinte);
        printf(" billetes de vinte ,");
        //desglosamos en billetes de cinco euros
        billete_de_cinco = (euros % 100)%5;
        printf("%d",billete_de_cinco);
        printf(" billetes de cinco ,");
        //desglosamos en monedas de un euro
        moneda_de_un = ((euros % 100)% 5)/ 1;
        printf("%d",moneda_de_un);
        printf(" monedas de un euro\n ");
    
    system ("pause");
}
