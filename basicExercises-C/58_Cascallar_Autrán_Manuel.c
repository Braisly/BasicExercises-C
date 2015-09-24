/*
Enunciado: crear un ficheiro en binario, cas ventas de todolos dias dun mes, introducindo o dia e o 
           importe das ventas dese dia, dia como enteiro corto e importe como real(float).
Autor: Manuel Cascallar Autrán
Data: 29/04/2010
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("title 58_Cascallar_Autrán_Manuel");
    FILE *fich;
    
    float importe;
    short dia;
    int opcion=0;

    fich=fopen("Importes_dias.txt","ab+");
    
    if(!fich){
              printf("Error! non se pudo abrir o arquivo\n");
              return 1;
    }

    do{
       printf("Introduce o dia:\n");
       scanf("%d",&dia);
       fflush(stdin);
       fwrite(&dia,sizeof(short),1,fich);
       printf("Introduce o importe:\n");
       scanf("%f",&importe);
       fflush(stdin);
       fwrite(&importe,sizeof(float),1,fich);
       printf("Si queres salir pulsa 1, senon outra tecla calquera\n");
       opcion=getchar();
    }while(opcion!='1');
    
    if(fclose(fich)){
                     printf("ERROR! ficheiro non fechado");
                     return 1;
    }
    fich=fopen("Importes_dias.txt","rb");
    
    if(!fich){
              printf("Error! non se pudo abrir o arquivo\n");
              return 1;
    }
    
    
    
    do{
          fread(&dia,sizeof(short),1,fich);
          fread(&importe,sizeof(float),1,fich);
          if(!feof(fich)){
          printf("D\241a: %d -",dia);
          printf("Importe: %.2f\n",importe);
          }
      
    }while(!feof(fich));
    
    
    
    
    if(fclose(fich)){
                     printf("ERROR! ficheiro non fechado");
                     return 1;
    }
    
system("pause");    
}
