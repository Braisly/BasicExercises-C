/*
Enunciado: programa para que escriba na pantalla "esto � un bucle" seis veces con "while", "do while" e "for".
Autor: Manuel Cascallar Autr�n
Data: 28-10-2009
*/


//FORMAS DE FACER BUCLES

/*
while(condici�n){
        instrucci�ns
}


do {
    instrucci�ns
}while (condici�n);

      
for(inicializaci�n; condici�n; variaci�n){
             instrucci�ns
           }
*/






//PROGRAMA UTILIZANDO "WHILE"

/*

#include<stdio.h>
#include<stdlib.h>

int main(){  
system ("title 15_EstoEUnBucle6Veces_Cascallar_Autr�n_Manuel");
printf ("PROGRAMA PARA FACER BUCLES\n");
printf ("==========================\n\n");
int c; //
c=0;
while (c<6){
      printf ("esto \202 un bucle\n");
      c=c+1;
      }    
system ("pause"); 
}
*/      

//PROGRAMA UTILIZANDO "DO WHILE"
/*

#include<stdio.h>
#include<stdlib.h>

int main (){
system ("title 15_EstoEUnBucle6Veces_Cascallar_Autr�n_Manuel");
printf ("PROGRAMA PARA FACER BUCLES\n");
printf ("==========================\n\n");
int c;
c=0;
do {
    printf ("esto \202 un bucle\n");
    c=c+1;
    }while (c<6);
system("pause");
}
*/

//PROGRAMA UTILIZANDO "FOR"

#include<stdio.h>
#include<stdlib.h>

int main (){
system ("title 15_EstoEUnBucle6Veces_Cascallar_Autr�n_Manuel");
printf ("PROGRAMA PARA FACER BUCLES\n");
printf ("==========================\n\n");
    int c;     
for( c=0  ; c<6  ; c=c+1  ){
    printf ("esto \202 un bucle\n");
    }

system ("pause");

}
