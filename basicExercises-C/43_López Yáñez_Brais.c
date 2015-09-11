/*
  Autor: Brais L.Y.
  Data: 13/01/10 10:09
  Descripcion: Función que deixe nunha variable o valor absoluto do que haxa gardado na variable.
*/

#include<stdio.h>

int absoluto(int *);

int main()
{
    int x;
    printf("\nDame un valor: ");
    scanf("%d",&x);
    absoluto(&x);
    printf("\nO valor absoluto \202: %d",x);
    fflush(stdin);
    getchar();
}
    

int absoluto(int *x)
{
    if(*x<0)
       *x=*x*(-1);
    else
       return *x;
}
