/*
Enunciado: Programa no que introduciremos dous números reales co teclado e ordenamolos de menor a maior.
Autor: Manuel Cascallar Autrán
Data: 8-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    system ("title Números ordenados de menor a maior");
    system ("color 90");
    system ("cls");
    printf (" N\243meros ordenados de menor a maior\n");
    float num,numero;
    printf("Introduce o primeiro n\243mero:\n");  
    scanf("%f",&num);//escribimos un número
    printf("Introduce o segundo n\243mero:\n");
    scanf("%f",&numero);//escribimos o outro número
    if (num < numero){//si o primeiro é menor que o segundo escribe primeiro o primeiro número e despois o segundo
                    printf("\n%f\n", num);
                    printf("%f\n\n", numero);
    }
    else {if (num > numero)  {         //si o primeiro non é menor que o segundo, si non que é maior, escribe o segundo antes que o primeiro
                     printf("\n%f\n", numero);
                     printf("%f\n\n", num);  
          }
                  else{//si o primeiro non é menor que o segundo, nin é maior, terán que ser iguais, polo que escribimos o primeiro primeiro e o segundo despois ainda que realmente o orden sea igual
                          printf("\n%f\n", num);
                          printf("%f\n\n", numero);
                  }
    }          
                          
    system ("pause");
    return 0;
}
