/*
enunciado: calcular a cuota para un prestamo. teclease nominal(n), interes anual en tanto por cen (i), 
numero de anos(t). Formula para calcular a cuota e cuota=n(1+i)^t*i  / (1+i)^t-1 estando i en tanto por 1 
mensual e t en meses.i= x% *100
Autor:Manuel Cascallar Autrán
Data: 06-11-2009
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){
    system("title 22_Cascallar_Autrán_Manuel");
    system("color 88");
    printf("CALCULAR CUOTA PARA PRESTAMOS\n");
    printf("=============================\n");
    char a,b;
    float cuota, n,t,i;//declaramos as variables
        
        printf("Elija una opci\242n:\n");
        printf("1                    - Calcular una cuota\n");
        printf("Outra tecla calquera - salir\n");
        scanf("%d",&a);
        switch(a){
        case 1:
        
        do{
        printf("\n");
        //valor do nominal
        printf("Introduce o valor do nominal:\n");
        scanf("%f",&n);
        //valor do interes en tanto por cen
        printf("Introduce o valor do interes en tanto por cen:\n");
        scanf("%f",&i);
        //numero de anos
        printf("Introduce o numero de anos:\n");
        scanf("%f",&t);
        
        if(i==0){
                 t=t*12;
                 n=n/t;
                 printf("%.2f\n",n);
                         
                         }
        else{
        t=t*12;
        i=i/1200;
        
        cuota = (n*(pow((1 + i),t)*i))/(pow((1+i),t)-1);
        printf("O valor da cuota \202:\n");
        printf("%.2f",cuota);
        printf("\n\n");
        }    
        
        
        printf("Queres calcular outra cuota ou salir?\n");
        printf("Para calcular outra cuota pulse: 1\n");
        printf("Para salir pulse: outra tecla calquera\n");
        scanf("%d",&b);
        }while(b==1);
        break;
       
        
        }
    
    
getchar();    
}
