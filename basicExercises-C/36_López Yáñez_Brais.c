/*
Descrición:Leer por teclado os valores dunha tabla de enteiros 3x4 e escribir o maior de cada fila e o menor de cada columna.
Data: 30-11-2009
Autor: Brais L.Y.
*/

#include <stdio.h>
#include <stdlib.h>


int main ()
{
    system ("title Matriz e dar menor e maior - Brais L.Y.");
    system ("color 0A");
    
    
    int filas, columnas, matriz [3][4];
    int maior, menor;
    
    for (filas=0;filas<3;filas++){
                                      printf("\n");
                                      for (columnas=0;columnas<4;columnas++){
                                                                              printf ("Introduce o n\243mero da fila %d, da columna %d: ", filas+1, columnas+1);
                                                                              scanf ("%d", &matriz[filas][columnas]);
                                                                             }
                                    }                                                                                   
    
    for (filas=0;filas<3;filas++) {
                                      maior=matriz [filas] [0];
                                      
                                     
                                      
                                      for (columnas=0;columnas<4;columnas++) {
                                                                           
                                                                             if (matriz [filas][columnas]>maior)  maior=matriz [filas][columnas];                                                                                                                       
                                                                             
                                                                           } 
                                      printf ("\n O maior da fila %d \202: %d", filas+1, maior);
                                      
                                      
                                  }
                       
     for (columnas=0;columnas<4;columnas++) {
                           
                                                 menor= matriz [0] [columnas];
                                                 for (filas=0;filas<3;filas++) {
                                                                                   if (matriz [filas][columnas]<menor) menor=matriz [filas][columnas];
                                                                                   }
                                                                                      
                                                 printf ("\n O menor da columna %d \202: %d", columnas+1, menor); 
                                              }         
                                    
   
    printf ("\n");
                                   
    system ("pause");
    
}    
                                                                 
   
