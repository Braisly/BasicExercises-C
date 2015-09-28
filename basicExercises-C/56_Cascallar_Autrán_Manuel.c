/*
Enunciado: un programa que nos vai permitir grabar nun ficheiro o nome e o ano de nacemento de unha 
   serie de persoas que se introducirán por teclado, separando por punto e coma o ficheiro do nome  e 
   do ano de nacemento, (prever unha forma de parar, cando pulses escape, cando deixes en blanco,...) 
   faise un menu que nos permita escoller entre añadir novos datos, listar os datos existentes e borrar 
   os datos.
Autor: Manuel Cascallar Autrán
Data: 16/04/2010
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 56_Cascallar_Autrán_Manuel");
    char nome[250];
    FILE *ficheiro;
    int x=0;
    char nomp[50];
    char ano[5];
    printf("Introduce o nome do programa:\n");
    scanf("%s",nome);
    ficheiro=fopen(nome,"a+");
    printf( "Fichero: %s (para lectura) -> \n", nome );
    if(!ficheiro){
                   printf("ERROR! %s NON ABERTO\n",nome); 
                   return 1;
    }
    
         do{
              printf("****MENU****\n");
              printf("1_Engadir novos datos\n");
              printf("2_Listar os datos existentes\n");
              printf("3_Eliminar os datos\n");
              printf("4_Sair\n\n");
              scanf("%d",&x);
              printf("\n");
                
                  switch(x){
                        case 1:
                             printf("ENGADINDO NOVOS DATOS\n\n");
                             fclose(ficheiro);
                             ficheiro=fopen(nome,"a+");
                             printf("Introduce o nome:\n");  
                             fflush(stdin);
                             scanf("%[^\n]",nomp);     
                             fputs(nomp, ficheiro);
                             fputs(";", ficheiro);
                              
                             printf("Introduce o ano de nacemento:\n");
                             scanf("%s",&ano);
                             fputs(ano, ficheiro);
                             fputs("\n\n", ficheiro);                             
                             break;
                        case 2:
                             printf("LISTA DE TODOLOS DATOS EXISTENTES\n\n");
                             fclose(ficheiro);
                             ficheiro=fopen(nome,"r");
                             while(!feof(ficheiro)){
                             fscanf(ficheiro,"%[^;];%s\n",nomp,&ano);
                             printf("%s\t%s\n",nomp,ano);
                             }
                             printf("\n");
                             system("pause");
                             break;
                        case 3:
                             printf("ELIMINANDO TODOLOS DATOS\n\n");
                             fclose(ficheiro);
                             ficheiro=fopen(nome,"w");
                             fputs("",ficheiro);
                             break;
                        case 4:
                             printf("Saindo do archivo\n");
                             break;
              
                  }
                
         }while(x!=4);
    
    if(fclose(ficheiro)){
                         printf("ERROR!: ficheiro non fechado\n");
                         return 1;
    }
    
system("pause");    
}
