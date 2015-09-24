/*
Enunciado: vamos a crear un ficheiro binario facendo un menu, introducir datos ou listar datos, 
resultados de partidos de baloncesto(nome do local (30caracteres), nome do visitante, puntos do local, 
puntos do visitante e numero de xornada).
Autor: Manuel Cascallar Autrán
Data: 30/04/2010
*/

//librerias
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



//declaracion de estructura
struct datos{
       short xornada;
       char local[30];     
       char visitante[30];
       short plocal;
       short pvisit;
};


int main(){    
    system("title 59_Cascallar_Autrán_Manuel");
    system("cls");
    
//declaracion de variables  
    FILE *fich;
    int a=0;
    struct datos baloncesto;
    
    do{
       //menu (Engadir datos, listar datos e sair)
       printf("\t******MENU******\n");
       printf("\t1-Engadir datos\n");
       printf("\t2-Listar datos\n");
       printf("\t3-Sair\n");
       printf("\t****************\n");
       //introducese o numero da opcion que queremos escoller
       scanf("%d",&a);
       switch (a){
               case 1://Engadimos datos
                    //abrimos o ficheiro (ou creamolo si non existe) para introducir datos,como binario
                    fich=fopen("59.dat","ab+");
                    if(!fich){//si o ficheiro non puido ser aberto da ERROR!
                              printf("ERRO! O ficheiro non puido ser aberto\n");
                              return 1;
                    }
                    //
                    printf("Engadir datos\n\n");
                    printf("n\243mero de xornada:\n");
                    scanf("%hd",&baloncesto.xornada);
                    fflush(stdin);
                    printf("\nEquipo Local:\n");
                    gets(baloncesto.local);
//                    scanf("%s",baloncesto.local);
                    fflush(stdin);
                    printf("\nEquipo Visitante:\n");
                    gets(baloncesto.visitante);
//                  scanf("%s",baloncesto.visitante);
                    fflush(stdin);
                    printf("\nPuntos Local:\n");
                    scanf("%hd",&baloncesto.plocal);
                    printf("\nPuntos Visitante:\n");
                    scanf("%hd",&baloncesto.pvisit);
                    fwrite(&baloncesto,sizeof(struct datos),1,fich);
                    printf("\n\n");
                    
                    if(fclose(fich)){//si o ficheiro non se puido cerrar da ERROR!
                                     printf("ERRO! ficheiro non fechado\n");
                                     system("pause");
                                     return 1;
                    }
                    break;
               case 2://listar os datos
                    //abrimos o ficheiro para lelo, como binario
                    fich=fopen("59.dat","rb");
                    if(!fich){//si o ficheiro non puido ser aberto da ERROR!
                              printf("ERRO! O ficheiro non puido ser aberto\n");
                              system("pause");
                              return 1;
                    }
                    
                    printf("Listar datos\n");
                    do{//le todos os datos e imprimeos na pantalla
                       fread(&baloncesto,sizeof(struct datos),1,fich);
                       if(!feof(fich)){
                                       printf("\nN\243mero de xornada: %hd\n",baloncesto.xornada);
                                       printf("Equipo Local: %s\n",baloncesto.local);
                                       printf("Equipo Visitante: %s\n",baloncesto.visitante);
                                       printf("Puntos Local: %hd\n",baloncesto.plocal);
                                       printf("Puntos Visitante: %hd\n",baloncesto.pvisit);                                                                              
                       }  
                       
                    }while(!feof(fich));
                    printf("\n\n");
                    if(fclose(fich)){//si o ficheiro non se puido cerrar da ERROR!
                                     printf("ERRO! ficheiro non fechado\n");
                                     return 1;
                    }
                    break;
               case 3://sae do programa
                    printf("Saindo\n");
                    break;
       }
    }while(a!=3);
    

    
system("pause");    
}
