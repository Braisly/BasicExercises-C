/*
Enunciado: Ficheiro do ultimo exercicio, keremos krear un novo ficheiro de texto, con rexistros de 
           lonxitude fixa en donde grabaremos nome dun ekipo(40caracteres) e partidos k leva ganados
           (3caracteres numericos) e os k leva perdidos (3caracteres numericos)os rexistros separanse 
           con saltos de lineas.
Autor: Manuel Cascallar Autrán
Data: 04/04/2010
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//////////////Estructura para introducir no ficheiro (ekipo, ganados e perdidos)
struct novos{
             char equipo[40];
             short int ganados;
             short int perdidos;
};

//////////////Estructura sacada do ficheiro(local, visitante e puntos do partido)
struct datos{
             short xornada;
             char local[30];     
             char visitante[30];
             short plocal;
             short pvisit;
};


int main(){
    system("title 60_Cascallar_Autrán_Manuel");
    FILE *fich;
    ///////////////////////////////////////////////ler datos do ficheiro
    fich=fopen("59.dat","rb");
    if(!fich){
              printf("ERRO! o ficheiro non se puido abrir\n");
              system("pause");
              return 1;
    }
    int x=0;
    
    
    struct datos baloncesto;
    struct novos partidos[32]={0};


    int h=0;
    int t=0;
    int cont=0;
    int i;
    

       do{
          fread(&baloncesto, sizeof(struct datos), 1,fich);
         
          if(!feof(fich)){
          h=0;
          t=0;               
                          for(i=0;i<cont;i++){
                              if(strcmp(partidos[i].equipo,baloncesto.local)==0){
                                 h=1;
                                 if(baloncesto.plocal>baloncesto.pvisit) partidos[i].ganados++;
                                 if(baloncesto.plocal<baloncesto.pvisit) partidos[i].perdidos++;
                              }
                              if(strcmp(partidos[i].equipo,baloncesto.visitante)==0){
                                 t=1;
                                 if(baloncesto.pvisit>baloncesto.plocal) partidos[i].ganados++;
                                 if(baloncesto.pvisit<baloncesto.plocal) partidos[i].perdidos++;
                              }
                          }
                          
                          if(h==0){
                                   strcpy(partidos[cont].equipo,baloncesto.local);
                                   if(baloncesto.plocal>baloncesto.pvisit) partidos[cont].ganados++;
                                   if(baloncesto.plocal<baloncesto.pvisit) partidos[cont].perdidos++;         
                                   cont++;
                          }
                          if(t==0){
                                   strcpy(partidos[cont].equipo,baloncesto.visitante);
                                   if(baloncesto.pvisit>baloncesto.plocal) partidos[cont].ganados++;
                                   if(baloncesto.pvisit<baloncesto.plocal) partidos[cont].perdidos++;         
                                   cont++;
                          }
          } 
       }while(!feof(fich));
       //comprobar os equipos e os partidos ganados e perdidos por cada un deles.
       for(i=0;i<cont;i++){
                           printf("%40s %3d %3d\n",partidos[i].equipo,partidos[i].ganados,partidos[i].perdidos);
       }
       system("pause");

       //fechar o ficheiro
    if(fclose(fich)){
                     printf("ERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return 1;
    }
    
    
    ////////////////////////////////////////////////////////Introducir datos no ficheiro
    
    
    fich=fopen("60.txt","w");
    if(!fich){
              printf("ERRO! o ficheiro non se puido abrir\n");
              system("pause");
              return 1;
    }
    //introducir os partidos coas suas respectivas cantidades de partidos ganados e perdidos
    for(x=0;partidos[x].equipo[0]!=0;x++){
           fprintf(fich,"%40s %3d %3d\n",partidos[x].equipo,partidos[x].ganados,partidos[x].perdidos);
    }
    
    
    if(fclose(fich)){
                     printf("ERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return 1;
    }    

}
