/*  
Enunciado: crear un archivo que se chame nome.txt no que escriba o meu nome e apelidos.
Autor: Manuel Cascallar Autrán
Data: 12-04-2010
*/

#include<stdio.h>

int main(){ 
   system("title 51_Cascallar_Autrán_Manuel");
   
   char nome[10]="nome.txt";
   char meu[]="Manuel Cascallar Autrán";
   FILE *ficheiro;
   int i;
   ficheiro = fopen( nome, "w" );
   printf( "Ficheiro: %s -> ", nome );
   if( !ficheiro ){
      printf( "Error (NON ABERTO)\n" );
      return 1;
   }
   printf( "Escribimos o meu nome e apelidos: %s\n\n", nome );
   for(i=0;i<strlen(meu);i++){
         printf("%c",fputc(meu[i],ficheiro));
   }
   printf("\n");
   if(fclose(ficheiro)){
                       printf( "\nError: ficheiro NON CERRADO\n" );
                       return 1;
   }
   system("pause");
   return 0;
}    

