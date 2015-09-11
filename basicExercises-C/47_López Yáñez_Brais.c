/*
Autor: Brais L.Y.
Data: 22/02/2010
Enunciado: cola con estructuras.
*/


// librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "lercadea.c"

// declaracion do tipo de estructuras
struct persoa{
   char nome[30];
   char direc[50];
   int ano;     
};

#define TAM 10

// chamadas as funcions



int main()
{
    //variables
    int opcion;
    int final=0;
    struct persoa cola[TAM];  // struct persoa é o tipo de dato que vai ter o vector cola.
    
    cola[0].nome[0]=0;
    cola[0].direc[0]=0;
    cola[0].ano=2010;
            
    // encabezados
    system("title 47 - Brais L.Y.");
    printf("\n\t\t Programa de xestion dunha cola.\n\n");
    
    //menu
    do{
    opcion=menu();
    switch(opcion){
                    case 1: // a opcion engadir facemola mandando a direccion da cola e o valor de final
                           final=engadir(cola,final);
                           break; 
                    case 2: // a opcion eliminar facemola pola 
                           final=eliminar(cola,final);
                           break;
                    case 3:
                           final=listar(cola,final);
                           break;
                    case 4:
                           final=primeiro(cola,final);
                           break;
                    case 5:
                           final=ultimo(cola,final);
                           break;
                    case 6:
                           final=tamano(final);
                            break;
                    case 0:
                           exit(1);
                  }
        }while(opcion!=0);   
}

//********************************************************************************************
    
int menu()  // esta funcion mostra o menu e acepta unha opcion devolvendo esa opcion a main.
{   
    // variables
    int op;
    // menu
    system("cls");
    printf("\n\t\t   |-------------------|");
    printf("\n\t\t   |---   M E N U   ---|");
    printf("\n\t\t   |-------------------|");
    printf("\n");
    printf("\n\t\t 1. Engadir novo elemento");
    printf("\n\t\t 2. Eliminar");
    printf("\n\t\t 3. Listar cola");
    printf("\n\t\t 4. Consultar primeiro");
    printf("\n\t\t 5. Consultar ultimo");
    printf("\n\t\t 6. Tama\244o da cola");
    printf("\n\t\t 0. Sair");
    printf("\n");
    printf("\n\t\t |>|   Escolle unha opcion: ");
    // bucle para evitar a mala eleccion no menu
    do{
       op=getch()-48;       //resto 48 a op
       if(op<0 || op>6) putchar(7);
      }while(op<0 || op>6); //  Ollo! con "||", non con &&
    return op;
    
}


//*********************************************************************************
int engadir(struct persoa *pt,int pos) // esta funcion engade un elemento á cola
{
    if(pos<TAM)  // hai sitio para engadir
              {               
                // ler nome
              printf("\n\t\t Introduce o nome: ");
              scanf("%s",(pt+pos)->nome);
                            
                // ler direccion
              printf("\n\t\t Introduce a direccion: ");              
              scanf("%s",pt[pos].direc);
            
             
                // ler ano             
              printf("\n\t\t Introduce o ano: ");
              scanf("%d",&(pt+pos)->ano);
              pos++;  //aumentar pos

              parar();
              }
              
    else        // non hai sitio para engadir
        {
         chea();
        }
  return pos;
}


//*********************************************************************************************
int listar(struct persoa *pt,int num)
{
    int cont;       
            for(cont=0;cont<num;cont++)
                                      {
                                       printf("\n\t\t Elemento %d",cont+1);
                                       printf("\n\t\t %s",(pt+cont)->nome);
                                       printf("\n\t\t %s",(pt+cont)->direc);
                                       printf("\n\t\t %d",(pt+cont)->ano);
                                       printf("\n\n");
                                      }    
    parar();                     
    return num;
}


//*********************************************************************************************
// recibe: a direccion de comezo da cola e o numero de elementos
// devolve: o numero de elementos que quedan na cola
int eliminar(struct persoa *pt,int num)
{
    int cont,cont1,cont2;
    if(num==0)
             {          
              printf("\n\t\t Non se pode eliminar elemento, a cola esta vacia");
              parar();
             }
    else
        {
         for(cont=0;cont<num-1;cont++)   *(pt+cont)=*(pt+cont+1); 
         printf("\n\n"); 
         for(cont1=0;cont1<=100;cont1++)
                                        {
                                        for(cont2=0;cont2<1000;cont2++)
                                        printf("\b\b\b");
                                        printf("\t\t |Eliminando: %d",cont1);
                                        putch(37);
                                        printf("|");
                                        }    
         printf("\n\t\t Elemento eliminado");
         
         parar();
         num--;
        }
    return num;
}


//*********************************************************************************************
int tamano(int final)
{
    printf("\n\t\t Tama\244o da cola: %d",final);
    parar();
    return final;    
}


//*********************************************************************************************
int primeiro(struct persoa *pt, int final)
{

   if(final==0)
               {
                printf("\n\t\t A cola esta vacia");
               }
   else
       {                                
         printf("\n\t\t Primeiro elemento");
         printf("\n\t\t %s",(pt+0)->nome);
         printf("\n\t\t %s",pt[0].direc);
         printf("\n\t\t %d",(pt+0)->ano);
         printf("\n\n");                       
         parar();
       }
   return final;
}


//*********************************************************************************************
int ultimo(struct persoa *pt,int final)
{
if(final==0)
            {
             printf("\n\t\t A cola esta vacia");
            } 
else
    {
     printf("\n\t\t Ultimo elemento");
     printf("\n\t\t %s",(pt+final-1)->nome);
     printf("\n\t\t %s",(pt+final-1)->direc);
     printf("\n\t\t %d",(pt+final-1)->ano);
     printf("\n\n");                       
     parar();   
    }
  return final;
}
//*********************************************************************************************
int parar()
{
    printf("\n\t\t ");
    system("pause");
}
    
int chea()
{
    printf("\n\t\t A cola esta chea\n\n\t\t ");
    system("pause");  
}  
