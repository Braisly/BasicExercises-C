/* 
Enunciado: funci�n recursiva que imprima 1,2,3,4,5... ata o valor absoluto dun n�mero que introduzcamos.
Autor: Manuel Cascallar Autr�n
Data: 27-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

  

void repetir (int);

int main(){
    //encabezamento
    system("title 35_Cascallar_Autr�n_Manuel");
    system("color 1F");
    system("cls");
    printf("FUNCION RECURSIVA QUE IMPRIMA NUMEROS\n");
    printf("=====================================\n");
    
    //declaramos a variable
    int a;
    printf("Introduce un n\243mero enteiro\n");
    scanf("%d",&a);//introducimos o valor de a
    repetir(a);
 
 
  system ("pause");  
}

//******************************************
// funci�n para escribir
//******************************************    
    
    void repetir (int x){
         
         if (x<0) x=-x;
         if(x>0) repetir (x-1);
         printf("%d ",x);
         return;
         }
         
         
         
