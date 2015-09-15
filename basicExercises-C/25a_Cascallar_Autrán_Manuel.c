/*
Enunciado: ler 5 numeros e que os coloque en orden inverso a como se escriben.
Autor: Manuel Cascallar Autrán
Data: 10-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 25_Cascallar_Autrán_Manuel");
    system("color 88");
    system("cls");
    printf("LER CINCO NUMEROS E COLOCALOS EN ORDEN INVERSO\n");
    printf("==============================================\n");
    float a, b, c, d, e;
    
          printf("\nIntroduce o primeiro n\243mero:\n");
          scanf("%f",&a);
          printf("\nIntroduce o segundo n\243mero:\n");
          scanf("%f",&b);
          printf("\nIntroduce o terceiro n\243mero:\n");
          scanf("%f",&c);
          printf("\nIntroduce o cuarto n\243mero:\n");
          scanf("%f",&d);
          printf("\nIntroduce o quinto n\243mero:\n");
          scanf("%f",&e);
                       
                       
                       printf("\n\nO orden dos numeros o invertilo \202:\n");
                       printf("%.2f\n", e);
                       printf("%.2f\n", d);
                       printf("%.2f\n", c);
                       printf("%.2f\n", b);
                       printf("%.2f\n", a);



system("pause");
}
