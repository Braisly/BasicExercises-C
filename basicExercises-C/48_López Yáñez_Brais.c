/*
Descrición: exercicio da cola con estructuras e malloc ou calloc para liberar memoria.
Autor: Brais L.Y.
Data: 08-03-2010
*/
#include <stdlib.h>
#include <stdio.h>
#include "lercadea.c"

// Declaracion da estructura
struct datos{
    char nom[30];
    char dir[50];
    int ano;
    struct datos  *ptseguinte;     };

// Declaracion de prototipos das funcions
struct datos * engadir( struct datos *ptinicio);
void listar(struct datos *ptinicio);
struct datos * eliminar(struct datos *ptinicio);
void primeiro(struct datos *ptinicio);
void ultimo(struct datos *ptultimo);
void tamano(struct datos *ptinicio);

//********************************
//********************************
// Funcion principal
//********************************
//********************************

int main(){    
    system("title Struct dinamica - Brais L.Y.");
    int op;
    struct datos *inicio=0;// inicio contera cero se a cola esta vacia
                           // ou a direccion do primeiro elemento da cola se non o esta
    do{    
        op=menu();        
        switch (op){
               case 1: inicio=engadir(inicio);
                       break;
               case 2: inicio=eliminar(inicio);
                       break;
               case 3: listar(inicio);
                       break;
               case 4: primeiro(inicio);
                       break;
               case 5: ultimo(inicio);
                       break;
               case 6: tamano(inicio);
                       break;         
        //listar();
        }
    }while(op!=0);
    system("pause");}

int menu(){
    int op;
    printf("\n\n_____----MENU----_____\n\n");
    printf("1. Engadir\n");
    printf("2. Eliminar\n");
    printf("3. Listar cola\n");
    printf("4. Consultar primeiro\n");
    printf("5. Consultar \243ltimo\n");
    printf("6. Tama\244o de cola\n");
    printf("0. Sair\n");
    printf("\n Escoller opci\242n: ");   
    
    do{
         op=getch()-48;
         if(op<0 || op>6) putchar(7);
    }while(op<0 || op>6);
    
    printf("%c",op+48);
    printf("\n");
    system("cls");
    return op;    
}
//***********************************************************
// Funcion para engadir un elemento na cola. 
//    recibe: a direccion do primeiro elemento da cola ou 0 se esta vacia.
//    devolve: a direccion do primeiro elemento da cola
//***********************************************************
struct datos * engadir( struct datos *ptinicio){
     struct datos *ptactual;
     struct datos *ptultimo;
     
     
     // obter memoria para o novo elemento
     ptactual=malloc(sizeof(struct datos));
     
     // ler e gardar nome, direccion e ano nacemento
     printf("\nIntroducir nome: ");
     ptactual->nom[0]=0;
     lercadea(ptactual->nom,sizeof(ptactual->nom));
     printf("\nIntroducir direccion: ");
     ptactual->dir[0]=0;
     lercadea(ptactual->dir,sizeof(ptactual->dir));
     printf("\nIntroducir ano: ");
     scanf("%d",&ptactual->ano);
     // asegurarnos que ptseguinte do novo elemento e = 0
     ptactual->ptseguinte=0;
     // facer que o que era ultimo na cola apunte ao novo
     if(ptinicio!=0){
         ptultimo=ptinicio;
         while(ptultimo->ptseguinte!=0){                 
             ptultimo=ptultimo->ptseguinte;
         }
         ptultimo->ptseguinte=ptactual;
     }else ptinicio=ptactual; // facemos que ptinicio apunte ao primeiro
     // Devolvemos direccion do primeiro da cola
     
     return ptinicio; }
//***********************************************************
// Funcion para listar a cola. 
//    recibe: a direccion do primeiro elemento da cola ou 0 se esta vacia.
//    devolve: nada
//***********************************************************
void listar(struct datos *ptinicio){
    struct datos *ptaux;
    // se esta vacia sacar mensaxe
    if(ptinicio==0) printf("Non se pode listar, a cola esta vacia\n\n"); 
   
    else{ // se non lista elementos
        ptaux=ptinicio;
        while(ptaux!=0 ){        
            printf("\n%s",ptaux->nom);
            printf("\n%s",ptaux->dir);
            printf("\n%d\n",ptaux->ano);
            ptaux=ptaux->ptseguinte;
        }
    }
    system("pause");}
//***********************************************************
// Funcion para eliminar un elemento da cola. 
//    recibe: direccion do primeiro elemento da cola 
//    devolve: ???
//***********************************************************

struct datos * eliminar(struct datos *ptinicio){
     struct datos *ptaux=ptinicio;
     if(ptinicio==0) printf("Non se pode eliminar, a cola esta vacia. \n");
     else{
     // mostramos o elemento a eliminar
     printf("Eliminando da cola o elemento: \n %s \n %s \n %d \n\n",ptinicio->nom,ptinicio->dir,ptinicio->ano);
     
     // facer que ptinicio apunte ao 2 
     ptinicio=ptinicio->ptseguinte;
     
     // liberar a memoria que ocupa o 1
     free(ptaux);
     // devolvemos a direccion do que queda de 1º (antes 2º)
     return ptinicio;
     }
     system("pause");
}

void primeiro(struct datos *ptinicio){ 
    if(ptinicio!=0)
    {
        printf("\n\n\t\tO primeiro elemento da cola \202: ");
        printf("\n\n\t\tNome: %s",ptinicio->nom);
        printf("\n\t\tDireccion: %s",ptinicio->dir);
        printf("\n\t\tAno: %d",ptinicio->ano);
        
    }
    else
    {
        printf("\n\n\t\tA pila ainda non conten ningun elemento...");
        
    }  
    }

void ultimo(struct datos *ptinicio){
          
     if(ptinicio!=0){

        // buscamos o ultimo
        while(ptinicio->ptseguinte!=0){ptinicio=ptinicio->ptseguinte;
        }
        // escribimos o ultimo
        printf("\n\n\t\tO ultimo elemento da pila \202:");
        printf("\n\n\t\tNome: %s",ptinicio->nom);
        printf("\n\t\tDireccion: %s",ptinicio->dir);
        printf("\n\t\tAno: %d\n",ptinicio->ano);
    } 
    
    else
    {
      printf("\n\n\t\tA pila ainda non conten ningun elemento...\n");
      
    }
    system("pause");
}

void tamano(struct datos *ptinicio){
     int cont=0;
     if(ptinicio!=0){
                     cont++;
                     while(ptinicio->ptseguinte!=0){
                                                    ptinicio=ptinicio->ptseguinte;
                                                    cont++;
                                                    }
                                    }
     printf("\n\nTamano: %d", cont);
     getchar();
     system("cls");
}
