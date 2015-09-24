/*
  Enunciado: temos dous ficheiros de texto. 62_VentasAcumuladas.txt (ventas de unha serie de vendedores) ordenado
por nome de vendedor alfabeticamente. outro 62_VentasVes.txt conten as ventas do ultimo mes.queremos actualizar o
primeiro dos ficheiros sumandolle as ventas do mes a cada vendedor. si é novo ainda non estará en ventas 
acumuladas asi que habria que incluilo no ventas acumuladas e si un de ventas acumuladas non vendeu neste mes 
tamen o ai k ter en conta. nome 40 caracteres, importe de ventas 9 posicions (2 decimais) 6 enteiros. e 2 decimais
Autor: Manuel Cascallar Autrán
Data: 19/05/2010
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
             char nome[41];
             char importe[10];       
}VENTAS;




int main(){
    FILE *fich,*ficheiro2,*ficheiro3;
    VENTAS ventas,ventas2;
    system("title 62_Cascallar_Autran_Manuel");
    
float import,import2;    
int band=0;   
    
    
    fich=fopen("62_VentasMes.txt","r+");
    if(!fich){
              printf("O archivo non puido ser aberto\n");
              return 1;
    }
    else{
         ficheiro2=fopen("62_VentasAcumuladas.txt","r+");
         if(!ficheiro2){
                        printf("O archivo non puido ser aberto\n");
                        return 1;               
         }
         else{
              ficheiro3=fopen("62_VentasTotal.txt","w+");
              if(!ficheiro3){
                             printf("O archivo non puido ser aberto\n");
                             return 1;               
              }     
         }   
    }
    fgets(ventas.nome,41,fich);
    fgets(ventas.importe,10,fich);
    fgets(ventas2.nome,41,ficheiro2);
    fgets(ventas2.importe,10,ficheiro2);
    while(!feof(fich) && !feof(ficheiro2)){
    if(strcmp(ventas.nome,ventas2.nome)==0){ 
                                             import=atof(ventas.importe);
                                             import2=atof(ventas2.importe);
                                             import=import+import2;
                                             
                                             fputs(ventas.nome,ficheiro3);
                                             fprintf(ficheiro3,"%9.2f",import);
                                             fgets(ventas.nome,41,fich);
                                             fgets(ventas.importe,10,fich);
                                             fgets(ventas2.nome,41,ficheiro2);
                                             fgets(ventas2.importe,10,ficheiro2);
                                             
    }
    else if (strcmp(ventas.nome,ventas2.nome)>0){
                                                 
                                                 fputs(ventas2.nome,ficheiro3);
                                                 fputs(ventas2.importe,ficheiro3);
                                                 fgets(ventas2.nome,41,ficheiro2);
                                                 fgets(ventas2.importe,10,ficheiro2);
         
         }
         else{
              
              fputs(ventas.nome,ficheiro3);
              fputs(ventas.importe,ficheiro3);
              fgets(ventas.nome,41,fich);
              fgets(ventas.importe,10,fich);
         }
    }
    
    while(!feof(fich)){
          if(!feof(fich)){
                          fputs(ventas.nome,ficheiro3);
                          fputs(ventas.importe,ficheiro3);
                          fgets(ventas.nome,41,fich);
                          fgets(ventas.importe,10,fich);
                        
          }
    }
    while(!feof(ficheiro2)){
          if(!feof(ficheiro2)){
                               fputs(ventas2.nome,ficheiro3);
                               fputs(ventas2.importe,ficheiro3);
                               fgets(ventas2.nome,41,ficheiro2);
                               fgets(ventas2.importe,10,ficheiro2);
              
          }
    }


    
    //////////////////////////////////////cerramos os ficheiros//////////////////////////
    if(fclose(fich)){
                     printf("ERRO! O archivo non puido ser fechado\n");
    }
    
    
    if(fclose(ficheiro2)){
                     printf("ERRO! O archivo non puido ser fechado\n");                 
    }
    
    if(fclose(ficheiro3)){
                     printf("ERRO! O archivo non puido ser fechado\n");                 
    }
    
system("pause");    
}
