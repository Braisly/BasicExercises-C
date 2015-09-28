/*
Enunciado: indicar cantos numeros hai grabados no ficheiro e calcular a media aritmetica
Autor: Manuel Cascallar Autrán
Data: 28/04/2010
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    system("title 57_Cascallar_Autrán_Manuel");
    
    FILE *fich;
    float leer;
    int i=1;
    float cuenta=0;
    float media;
    fich=fopen("57.dat","rb");
    
    if(!fich){
       printf("Error abrindo arquivo");
       return 1;
       }
    system("cls");
    system("pause");
    
    do{
       fread(&leer, sizeof(float), 1, fich);
       if(!feof(fich)){ 
                        printf("%d - %.2f \n", i,leer);
                        cuenta=cuenta+leer;
       }
       i++;
    }while(!feof(fich));
    
    printf("suma total: %.2f\n\n",cuenta);
    media=cuenta/sizeof(cuenta);
    printf("media: %.2f\n\n",media);
    
    if(fclose(fich)){
                         printf("ERROR!: ficheiro non fechado\n");
                         return 1;
    }
    
    
    system("pause");
    
}
