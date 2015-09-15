//Autor: Manuel Cascallar Autrán


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

int main(){
    unsigned char c,f, v[100];
    int posicion=0,i; // vaime decir onde estou no vector (onde vou gardar o proximo caracter)
    int aux, j, x; 
    printf("Teclea un texto: ");
    do{
      // printf("%s",v);
       
        c=getch(); //ler caracter
              
              
        
                    putchar(c); // mostro na pantalla o caracter
                    v[posicion]=c; // gardar o caracter
                    posicion++;
                    v[posicion]=0;
          
      
     }while(posicion!=100);       
     system("pause");
}
