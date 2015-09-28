/* 
Enunciado: programa que lea linea a linea, (de intro a intro) un ficheiro de texto que teña varios saltos de 
linea (parrafo a parrafo) (con menos de 1000 caracteres)
Autor: Manuel Cascallar Autrán
Data: 12/04/2010
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    system("title 54_Cascallar_Autrán_Manuel");
    system("color F1");
    system("cls");
   char nombre[10]="datos.txt";
   unsigned char parrafo[1001];
   FILE *ficheiro;
   int i;
   ficheiro = fopen( nombre, "r" );

   printf( "Ficheiro: %s -> ", nombre );
   if(!ficheiro){-
      printf( "Error (NON ABERTO)\n" );
       system("pause");

      return 1;
   }
   printf( "La primera linea del fichero: %s\n\n", nombre );
   while(!feof(ficheiro)){
   fgets(parrafo, 1000, ficheiro);
for(i=0;i<strlen(parrafo);i++){
                               
                               if(parrafo[i]==225) parrafo[i]='\240';//a
                               if(parrafo[i]==233) parrafo[i]='\202';//e
                               if(parrafo[i]==257) parrafo[i]='\241';//i
                               if(parrafo[i]==243) parrafo[i]='\242';//o
                               if(parrafo[i]==250) parrafo[i]='\243';//u
                               if(parrafo[i]==211) parrafo[i]='\265';//A
                               if(parrafo[i]==218) parrafo[i]='\220';//E
                               if(parrafo[i]==193) parrafo[i]='\326';//I
                               if(parrafo[i]==201) parrafo[i]='\340';//O
                               if(parrafo[i]==205) parrafo[i]='\351';//U
                               if(parrafo[i]==241) parrafo[i]='\244';//ñ
                               if(parrafo[i]==209) parrafo[i]='\245';//Ñ
                               printf("%c",parrafo[i]);
                               
} 
printf("\n"); 
}
   if(fclose(ficheiro)){
       printf( "\nError: ficheiro NON CERRADO\n" );
         system("pause");

      return 1;
   }
    system("pause"); 
}


