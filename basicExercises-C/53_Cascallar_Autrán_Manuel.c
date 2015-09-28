/*  
Enunciado: crear un archivo que se chame nome.txt no que escriba o meu nome e apelidos.
Autor: Manuel Cascallar Autrán
Data: 12-04-2010
*/

#include<stdio.h>

int main(){ 
   system("title 52_Cascallar_Autrán_Manuel");
   
   char nome[]="nome52.txt";
   char meu[]=" Cascallar Autran";
   
   FILE *ficheiro;
   ficheiro = fopen( nome, "a" );
   printf( "Ficheiro: %s -> ", nome );
   if( !ficheiro ){
      printf( "Error (NON ABERTO)\n" );
      return 1;
   }
   printf( "Escribimos o meu nome: %s\n\n", nome );
   
   fputs(meu,ficheiro);
   
   
   if(fclose(ficheiro)){
                       printf( "\nError: ficheiro NON CERRADO\n" );
                       return 1;
   }
   system("pause");
   return 0;

}    

