/*
Enunciado: 17.	Ler por teclado unha cantidade en segundos e ver por pantalla as horas, minutos e segundos aos que equivale
Autor: Manuel Cascallar Autrán
Data: 26-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    system ("title 12_SegundosEnHorasMinutosESegundos_Cascallar_Autrán_Manuel");
    printf ("EQUIVALENTE EN HORAS MINUTOS E SEGUNDOS\n");//Poñolle o titulo
    printf ("=======================================\n");
    
    int s, segundos, minutos, horas;
    printf ("Introduce a cantidade de segundos\n");
    scanf("%d", &s);//s=segundos
    
    //horas:minutos:segundos
    horas = s / 3600;
    printf("%d",horas);
    printf(" horas - ");


    
    minutos = (s%3600)/60;
    printf ("%d",minutos);
    printf (" minutos - ");
 
    segundos = (s%3600)%60;  
    printf ("%d",segundos);
    printf (" segundos\n");
    
    
    system ("pause");
}

