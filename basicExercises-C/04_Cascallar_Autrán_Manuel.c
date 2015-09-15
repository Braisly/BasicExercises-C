/*
Enunciado: Programa que calcula a área dun triángulo. (variables reais)
Autor: Manuel Cascallar Autrán
Curso: 1DAIA
Data: 6-09-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float base, altura, resultado;
    system("title Programa para calcular a area dun triangulo");
    system("color 72");
    printf("Introduce a base:\n");
    scanf ("%f",&base);
    printf("Introduce a altura:\n");
    scanf("%f",&altura);
    resultado = base * altura /2;
    printf("A \240rea do tri\240ngulo \202: %f * %f = %f\n", base, altura, resultado);
    system ("pause");
    return 0;
}
