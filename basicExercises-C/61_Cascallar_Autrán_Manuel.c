/*Programa que permita o mantemento dun arquivo de libros (altas, baixas, modificacións e consultas) 

 Os datos de cada libro estan grabados nun arquivo 
 binario (libros.dat)no que os datos de cada rexistro
 están nunha estructura cos seguintes campos:
            código de libro   5 caracteres
            Título           30 caracteres
            Autor           30 caracteres
            Editorial      20 caracteres
            Precio          real precision simple
            unidades      enteiro corto
altas: pedir codigo, comprobar que non existe, introducir datos si non existe. baixas: pedir codigo, comprobar
que existe e eliminar se existe (duas maneiras de eliminar: eliminacion fisica: copiar ficheiro con todos os 
datos menos o que queremos eliminar e eliminar o ficheiro orixinal; ou por marca: poñemos un caracter nulo, na
primeira posicion do vector). modificacions: pedir codigo, si existe, modificar. consultas: comprobar si existe 
codigo, si existe, ver os datos do libro.

*/


//librerias
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


//estructura
struct libros{
       char codigo_libro[5];
       char titulo[30];
       char autor[30];
       char editorial[20];
       float precio;
       short int unidades;       
};

//fseek
//fsetpos
//fgetpos
//remove
//rename
//rewind

//declaracion de funcions
void altas();
void baixas();
void modificacions();
void consultas();





/////////////////////////////////////////////////////////////////MAIN///////////////////////////////////////////
int main(){
    
//declaracion de variable
    int a;
    
    do{//MENU
    
    printf("\nElixe unha destas opcions\n");
    printf("0-Sair\n");
    printf("1-Altas\n");
    printf("2-Baixas\n");
    printf("3-Modificacions\n");
    printf("4-Consultas\n");
    
    //introducir eleccion
    scanf("%d",&a);
    
    switch(a){
             case 1:
                  altas();
                  break;
             case 2:
                  baixas();
                  break;     
             case 3:
                  modificacions();
                  break;
             case 4:
                  consultas();
                  break;
    }
    
    }while(a!=0);//si se elixe 0 (sair) sae do programa

system("pause");    
}



////////////////////////////////////ALTAS///////////////////////////////////////////////////////////////////////
void altas(){
    FILE *fich;
    
     //declaracion de variables
    char cod[5];
    struct libros introducir={0};
    int i;
    int band=0;;
    
    
    printf("\nIntroduce o codigo do libro que queres introducir:\n");
    scanf("%s",&cod);
    
///////abrese o ficheiro para comprobar se o codigo (e polo tanto o libro tamen) xa existe//////////////////////
    fich=fopen("libros.dat","ab+");
    rewind(fich);
    if(!fich){
              printf("\nO archivo non existe. Creando archivo. Introduce os datos do libro:\n");
              band=2;
              }


    if(band!=2){
       for(i=0;!feof(fich);i++){
           fread(&introducir, sizeof(struct libros), 1,fich);
           if(!feof(fich)){  
              if(strcmp(cod,introducir.codigo_libro)==0){
                 printf("\nO libro xa existe. Non se pode introducir\n");
                 band=1;
                 break;
              }
           }
       }
    }


    //si o libro ainda non existe, entra no ficheiro para introducir os datos dese libro
    if(band!=1){
                

                strcpy(introducir.codigo_libro,cod);
                printf("\nIntroducir titulo, autor, editorial, precio e unidades\n");
                printf("Titulo:\n");
                fflush(stdin);
                gets(introducir.titulo);
                printf("Autor:\n");
                fflush(stdin);
                gets(introducir.autor);
                printf("Editorial:\n");
                fflush(stdin);
                gets(introducir.editorial);
                printf("Precio:\n");
                fflush(stdin);
                scanf("%f",&introducir.precio);
                printf("Unidades:\n");
                fflush(stdin);
                scanf("%hd",&introducir.unidades);
                
                fwrite(&introducir, sizeof(struct libros), 1, fich);
                
                printf("\n%s %s - %s ",introducir.codigo_libro,introducir.titulo,introducir.autor);
                printf("- %s - %.2f - %hd\n",introducir.editorial,introducir.precio,introducir.unidades);
    }
    
    if(fclose(fich)){
                     printf("\nERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return;
    }
    
    band=0;

}
////////////////////////////////////BAIXAS/////////////////////////////////////////////////////////////////////
void baixas(){
    FILE *fich;
    fich=fopen("libros.dat","rb+");
    struct libros quitar;
    char cod[5], borrar[]={0};

    int band=0;
    int i;
    
    //comproba si o libro existe
    printf("\nIntroduce o codigo do libro que queres consultar:\n");
    scanf("%s",&cod);
    rewind(fich);
   
    for(i=0;!feof(fich);i++){
           fread(&quitar, sizeof(struct libros), 1,fich);
           if(!feof(fich)){  
              if(strcmp(cod,quitar.codigo_libro)==0){
                 band=1;
                 break;
              }
           }
    }
    if(band==0){
                printf("\nO libro non existe\n");                
    }
    

    //eliminar o libro

    if(band==1){

                fseek(fich,-sizeof(quitar),SEEK_CUR);
                strcpy(quitar.codigo_libro, borrar);
                fwrite(&quitar, sizeof(quitar.codigo_libro), 1, fich); 
                printf("Libro borrado\n");


    }

    if(fclose(fich)){
                     printf("ERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return;
    }
    
}
////////////////////////////////////MODIFICACIONS////////////////////////////////////////////////////////////////
void modificacions(){
    FILE *fich;
    struct libros modificar;
    int i;
    int band=0;
    fpos_t posicion;
    char cod[5];
    fich=fopen("libros.dat","rb+");
    //comproba si o libro existe
    printf("\nIntroduce o codigo do libro que queres consultar:\n");
    scanf("%s",&cod);
    rewind(fich);
    for(i=0;!feof(fich);i++){
           fread(&modificar, sizeof(struct libros), 1,fich);
           if(!feof(fich)){  
              if(strcmp(cod,modificar.codigo_libro)==0){
                 band=1;
                 break;
              }
           }
    }
    if(band==0){
                printf("\nO libro non existe\n");                
    }
    
    //modificar os datos do libro

    if(band==1){
                fseek(fich,-sizeof(modificar),SEEK_CUR);
                printf("\nIntroducir titulo, autor, editorial, precio e unidades\n");
                printf("Titulo:\n");
                fflush(stdin);
                gets(modificar.titulo);
                printf("Autor:\n");
                fflush(stdin);
                gets(modificar.autor);
                printf("Editorial:\n");
                fflush(stdin);
                gets(modificar.editorial);
                printf("Precio:\n");
                fflush(stdin);
                scanf("%f",&modificar.precio);
                printf("Unidades:\n");
                fflush(stdin);
                scanf("%hd",&modificar.unidades);
                fseek(fich,-sizeof(modificar),SEEK_CUR);
                

                fwrite(&modificar, sizeof(struct libros), 1, fich);

    }



    if(fclose(fich)){
                     printf("ERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return;
    }
}
/////////////////////////////////////CONSULTAS/////////////////////////////////////////////////////////////////
void consultas(){
    FILE *fich;
    fich=fopen("libros.dat","rb");
    char cod[5];
    int i;
    int band=0;
    if(!fich){
              printf("ERRO! o ficheiro non se puido abrir\n");
              system("pause");
              return;
    }
    struct libros consultar={0};
    printf("\nIntroduce o codigo do libro que queres consultar:\n");
    scanf("%s",&cod);
     
    for(i=0;!feof(fich);i++){
        fread(&consultar, sizeof(struct libros), 1,fich);
        if(!feof(fich)){  
                        if(strcmp(cod,consultar.codigo_libro)==0){
                           printf("\n%s %s - %s ",consultar.codigo_libro,consultar.titulo,consultar.autor);
                           printf("- %s - %.2f - %hd\n",consultar.editorial,consultar.precio,consultar.unidades);
                           band=1;
                           break;
                        }
        }
    }
    if(band!=1){
                printf("O libro non existe, ou introduciches un codigo erroneo. Comproba si o codigo \202 correcto\n");            
    }
    band=0;
    

    if(fclose(fich)){
                     printf("ERRO! O ficheiro non puido ser cerrado\n");
                     system("pause");
                     return;
    }

}

