/*
enunciado: Programa que lea unha cadea de caracteres de 100 bytes e unha vez introducida a cadea que nos diga cantas 
vocais hai nesa cadea.
Autor: Manuel Cascallar Autrán
Data: 19-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 31_Cascallar_Autrán_Manuel");
    system("color 0A");
    system("cls");
    printf("VOCAIS NUNHA CADEA DE CARACTERES\n");
    printf("================================\n");
    
    
    unsigned char v[100];//declaramos o tamaño máximo do vector
    printf("Introduce a cadea de caracteres:\n");
    gets(v);//introducimos a cadea de caracteres
    //declaramos o vector que contén as vocales
    unsigned char vocales[]={'a','e','i','o','u','A','E','I','O','U',160,130,161,162,163,181,144,214,224,233};
    int c, a, i;//declaramos o contador(c), e duas variables
    c=0;//contador=0
    a=0;//variable=0
    i=0;//variable=0
    for(i=0;v[i]!=0 ;i++){//condición inicial i=0, faise ata que v[i]=0, e sumaselle 1 a i cada vez que se repite o bucle
                 for(a=0;a<sizeof(vocales);a++){//condición inicial a=0, mentras a<que vocales[final], sumaselle á a 1.
                                   if(v[i]==vocales[a])c++;{//si v[i] é igual a unha das vocales entonces que sume a c 1
                                                            }
                                  }
                      }
                      //Escribe o numero de vocales introducidas.
    printf("%d\n",c);
        
    
system("pause");    
}
