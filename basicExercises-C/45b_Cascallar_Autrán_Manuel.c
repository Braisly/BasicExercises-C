//Autor: Manuel Cascallar Autr�n

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){

    unsigned char c,f, v[100];
    int posicion=0,i; // vaime decir onde estou no vector (onde vou gardar o proximo caracter)
    int aux, j, x; 
    printf("Teclea un texto: ");
    do{
        c=getch(); //ler caracter
        
        switch (c){
               //case 13: 
                      //return;
                      //break;
               
               case 8: //si � retroceso(8)      
                       //borrar ultimo caracter leido   
                       
                       if (posicion==0) putchar(7);
                       else {
                            if(v[posicion]==0){ //esto � igual a =(!v[posicion])
                                putchar(8);//retrocede o cursor
                                putchar(' ');//imprime un espacio en blanco no lugar onde esta o cursor
                                putchar(8);//como na anterior instruccion o cursor avanza un lugar, retrocedese outra vez
                                
                                posicion--;
                                v[posicion]=0;
                            }
                            else {
    //--printf("\n%d\n", posicion);
                                 //eliminar caracter da pantalla
                                 putchar(8);
                                 printf("%s ",&v[posicion]);
                                 for(i=0;i<strlen(&v[posicion])+1;i++) putchar (8);
    
                                //eliminar da memoria o caracter a borrar
                                  
                                 for(i=posicion-1;i<strlen(v);i++){ v[i]=v[i+1]; 
                                 }
                            }  
                        }   
                               
                       break;
               
               default: // en outro caso gardar o caracter
                    putchar(c); // mostro na pantalla o caracter
                    v[posicion]=c; // gardar o caracter
                    posicion++;
                    v[posicion]=0;
          }
      
     }while(1);       
     system("pause");
}

