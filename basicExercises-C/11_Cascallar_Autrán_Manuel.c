/*
Enunciado 11: Facer un programa que acepte por teclado un caracter e indique se � unha letra ou non.
Autor: Manuel Cascallar Autr�n
Data: 21-10-2009
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
           system("color 88");
           system("title 11_CaracterLetraSiNon_Cascallar_Autr�n_Manuel");
           printf ("CARACTER LETRA SI OU NON\n");
           printf ("========================\n");
           unsigned char variable; 
           //char variable;
           //unsigned char variable; 
           //signed char variable; //permite n�meros negativos
           printf("Introduce o car\240cter\n");
           //scanf("%c",&variable);//ler un caracter
            //variable = getchar();//#include<stdio.h>
           
           variable = getche(); //#include<conio.h>
           //variable = getch(); //#include<conio.h>
           
           if (variable>=65 && variable<=90  ||  variable>=97 && variable<=122 || variable>=129  && variable<=130  || variable>=160 && variable<=165){
                             printf ("\nO car\240cter _%c_ \202 unha letra\n",variable);
                             }
                          
           else {
                 printf ("\nO car\240cter _%c_ non \202 unha letra\n",variable);
                 }
                                  
                            
           system ("pause");
}
