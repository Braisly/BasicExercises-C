/*
Descrición: Leer os valores dunha matriz de 5x4, e imprimir a trasposta de esta.
Autor: Brais L.Y.
Data: 01-12-2009
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    
    system("title Matriz trasposta - Brais L.Y.");
    system ("color 0A");
    int filas, columnas, matriz [5][4];
    //Leer datos e a tabla
    for (filas=0;filas<5;filas++){ printf ("\n");
                                   for (columnas=0;columnas<4;columnas++){
                                                                           printf("Introduce o n\243mero da fila %d e da columna %d: ", filas+1, columnas+1);
                                                                           scanf ("%d", &matriz[filas][columnas]);
                                                                         }
                                 }
   //Facer trasposta
   for (filas=0;filas<4;filas++){  printf ("\n");
                                   for (columnas=0;columnas<5;columnas++){
                                                                           printf ("%5.d ", matriz[columnas][filas]);             
                                                                         }
                               }  
   printf ("\n\N");                                                                    
   system ("pause");
                                                
}                                                                           
