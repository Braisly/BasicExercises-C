/*Enunciado: tabla de duas dimensi�ns ^[5*6].pidenos un n�mero enteiro e na tabla 5, 5*5, 5*5*5,...; 2� fila, 6, 6*6,...
int nome tabla[numero filas][numero columnas]; T[3][4] 3 filas 4 elementos por fila. para coller un elemento:
T[numero fila][numero columna]
sizeof(nome tabla) tama�o de toda a taboa, nome [x](por ejemplo 3) representa fila,    
Autor: Manuel Cascallar Autr�n
Data: 20-11-2009    
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    system("title 32_Cascallar_Autr�n_Manuel");
    system("color 0A");
    system("cls");
    printf("TABLA DE FILAS E COLUMNAS\n");
    printf("=========================\n");
    
    
    int x, y, c=1, z;//declaramos as variables
    float num; 
     
    printf("Elixe un n\243mero para facer a tabla:\n");
    scanf("%f",&num);//introducimos o numero polo que vai empezar a tabla
    printf("\n");
     
    float T[5][6]={num};//declaramos o tama�o m�ximo da tabla � damoslle como primeiro valor o numero introducido por teclado
    for(x=0;x<5;x++){                //filas
        if(x!=0)   T[x][0]=T[x-1][0]+1;     //si x � 0 e y � 0 o elemento xa � o gardado en num.sen�n funcionan estes bucles
        for(y=0;y<6;y++){              //columnas
            if(y==0) z=y;
            if(y!=0) T[x][y]=pow(T[x][z],y+1);
        
        }
       
    
    }
    //imprimir tipo tabla
    for(x=0;x<5;x++){
                     for(y=0;y<6;y++){
    printf("%-13.2f",T[x][y]);
                    if(c!=0) if(c%6==0)printf("\n");
             c++;
             }
             }    
              
    
    
   
    printf("\n");
system("pause");    
}
