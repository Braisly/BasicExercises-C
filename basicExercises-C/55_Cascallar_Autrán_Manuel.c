/*
Enunciado: programa que sustituya nun ficheiro as letras con tilde e as eñes, que faga unha copia dese ficheiro,
 no que sustituya todos os caracteres que non coinciden 
Autor: Manuel Cascallar Autrán
Data: 14/04/2010
 */
 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    system("title 55_Cascallar_Autrán_Manuel");
    system("color F1");
    system("cls");
    
   char nombre[250];
   fgets(nombre,sizeof(nombre),stdin);
   if(nombre[strlen(nombre)-1]==10) nombre[strlen(nombre)-1]==0;

   unsigned char traduccion[]={225,'\240',243,'\242',250,'\243',241,'\244',209,'\245',192,'\265',201,'\220',205,'\326',211,'\340',218,'\351',233,'\202',193,'\265',171, '\256',187,'\257',186,'\370',170,'\246',161,'\255',237,'\241',199,'\200',168,'\371',191,'\250',183,'\372',172,'\252',180,'\357'};
   FILE *ficheiro;           //á        //í        //ó       //ú         //ñ        //Ñ        //É        //Í        //Ó        //Ú        //é        //Á        //          //         //         //         //         //         //         //         //         //         //         //
   
   int i,x;
   unsigned char linea[1001];
   ficheiro = fopen( nombre, "r" );
   FILE *ficheiro2;
   ficheiro2 = fopen("modificado.txt","w");
   
   printf( "Ficheiro: %s ->\n ", nombre );
   if(!ficheiro){
       printf( "Error (NON ABERTO)\n" );
       system("pause");

      return 1;
   }
   while(!feof(ficheiro)){
   
   fgets(linea,1001,ficheiro);
        for(i=0;i<strlen(linea);i++){
        for(x=0;x<sizeof(traduccion);x=x+2){
                            if(linea[i]==traduccion[x]) linea[i]=traduccion[x+1];//á
        }
                               printf("%c",linea[i]);
                               
        }
   printf("\n");  
   fputs(linea,ficheiro2);
   }
   
   if(fclose(ficheiro)){
       printf( "\nError: ficheiro NON CERRADO\n" );
         system("pause");

      return 1;
   }
    system("pause"); 
}


