/*
Enunciado: introducir un numero enteiro decimal, introducir unha base, e escribiranos o equivalente do 
numero decimal que escribamos nesa base.
Autor: Manuel Cascallar Autrán
Data: 11-11-2009
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system ("title 27_Cascallar_Autrán_Manuel");
    system ("color 0A");
    system ("cls");
    printf("EQUIVALENTE DUN DECIMAL NOUTRA BASE\n");
    printf("===================================\n");
    
    int num, base, resto[8], i, a;
    i=0;
    
    do{
    printf("Introducir o n\243mero decimal:\n");
    scanf("%d",&num);
    
    
    printf("Introduce a base:\n");    
    scanf("%d",&base);
    
    if(num!=0 && base !=0){
                           
                           for(a=0;a<8 ;a++){
                           resto[i]=num%base;
                           
                           num=num/base;
                           i++;
                           
                           }
                           
                           for(i=7;i>=0;i--){
                                             printf("%d",resto [i]);
                                             
                                             
                                             }
                                             
                           }
    }while(num!=0 && base!=0);
system("pause");    
}
