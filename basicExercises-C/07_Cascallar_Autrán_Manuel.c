/*
Enunciado: Programa no que introduciremos dous n�meros reales co teclado e ordenamolos de menor a maior.
Autor: Manuel Cascallar Autr�n
Data: 8-10-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    system ("title N�meros ordenados de menor a maior");
    system ("color 90");
    system ("cls");
    printf (" N\243meros ordenados de menor a maior\n");
    float num,numero;
    printf("Introduce o primeiro n\243mero:\n");  
    scanf("%f",&num);//escribimos un n�mero
    printf("Introduce o segundo n\243mero:\n");
    scanf("%f",&numero);//escribimos o outro n�mero
    if (num < numero){//si o primeiro � menor que o segundo escribe primeiro o primeiro n�mero e despois o segundo
                    printf("\n%f\n", num);
                    printf("%f\n\n", numero);
    }
    else {if (num > numero)  {         //si o primeiro non � menor que o segundo, si non que � maior, escribe o segundo antes que o primeiro
                     printf("\n%f\n", numero);
                     printf("%f\n\n", num);  
          }
                  else{//si o primeiro non � menor que o segundo, nin � maior, ter�n que ser iguais, polo que escribimos o primeiro primeiro e o segundo despois ainda que realmente o orden sea igual
                          printf("\n%f\n", num);
                          printf("%f\n\n", numero);
                  }
    }          
                          
    system ("pause");
    return 0;
}
