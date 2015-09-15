/*
Enunciado: 29.	Calcular raices cadradas dunha ecuación de segundo grado  , tecleanse os coeficientes a,b,c e sacanse as solucións.
Autor: Manuel Cascallar Autrán
Data: 26-10-2009
*/

//ax2 + bx +c = 0
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    system ("title 14_CalcularEcuaciónDeSegundoGrado_Cascallar_Autrán_Manuel");
    printf ("ECUACION DE SEGUNDO GRADO");
    printf ("=========================");
    float a, b, c, r1, r2;
    printf ("ax^2 + bx + c = 0\n"); 
    
    printf ("Introducir el valor de a\n");
    scanf ("%d", &a);
    
    printf ("Introducir el valor de b\n");
    scanf ("%d", &b);
    
    printf ("Introducir el valor de c\n");
    scanf ("%d", &c);
    
    // Operamos
    if ((b*b)-(4*a*c)<0){
       printf("Esta ecuaci\242n non ten soluci\242n\n");
       }
       else {
            r1 = (b+sqrt ((b*b) -(4*a*c)))/(2*a);
            r2 = (-b+sqrt ((b*b)-(4*a*c)))/(2*a);
            printf ("\nO resultado da ecuaci\242n \202: %.2f e %.2f\n",r1,r2);
            
            }
    
    system ("pause");
}
  
