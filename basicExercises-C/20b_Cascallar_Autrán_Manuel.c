/*
Enunciado: pares entre 2 e un número introducido co teclado postos en filas
Autor: Manuel Cascallar Autrán
Data: 03-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
        system("cls");
        system("title 20b_Cascallar_Autrán_Manuel");
        system("color 88");
        printf("NUMEROS PARES ENTRE 2 E UN NUMERO ESCRITO CO TECLADO\n");
        printf("====================================================\n");
        int a, b,x;
        printf("Introduce o n\243mero donde ten que empezar o bucle: (ten que ser 2, senon non funciona)\n");
        scanf("%d",&x);
        printf("Introduce o n\243mero donde ten que parar o bucle:\n");
        scanf("%d",&b);
        printf("\n");
        
        if(x%2==0){
        if (b>=2){
        for (a=x;a<=b ;a=a+2 ){
            printf("%d",a);
            printf("\n");
            
                           }
            }
            else printf("Os n\243meros escritos non son validos");
            }
            else printf("Os n\243meros escritos non son validos");
system ("pause");
}
