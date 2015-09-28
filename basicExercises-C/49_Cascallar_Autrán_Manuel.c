/*
Enunciado: resta de dous números pasados como parámetros a main
Autor: Manuel Cascallar Autrán
Data: 25/03/2010
*/

#include<stdio.h>
#include<stdlib.h>

void axuda(char *nomeprograma);
int ereal(char *ptcadea);

int main(int argc, char * argv[]){//por ser unha dirección un asterisco e por ser unha dirección que   
                                   //apunta a un vector outro asterisco (ou corchetes ao final)
    system("title 49_Cascallar_Autran_Manuel");
    system("color 1F");
    system("cls");
    double primeiro, segundo;
    if(argc!=3) axuda(argv[0]);
    else if(!ereal(argv[1]) || !ereal(argv[2])) axuda(argv[0]); 
         else {
               primeiro=atof(argv[1]);
               segundo=atof(argv[2]);
               printf("\n\n%.2f - %.2f = %.2f \n\n",primeiro, segundo, primeiro-segundo);
               system("pause");
         }
                         
    
}
//**************************
//Función que mostra a axuda
//**************************
void axuda(char *nomeprograma){
     char *ptaux;
     //buscamos o principio do nome do programa
     ptaux=nomeprograma+strlen(nomeprograma)-1;
     while(ptaux>nomeprograma && *ptaux != '\\') ptaux --;
     if(*ptaux=='\\') ptaux++;
     //mostramos a axuda
     printf("\n***********");
     printf("\n***********\n");
     printf("***     ***");
     printf("\n***AXUDA***\n");
     printf("***     ***");
     printf("\n***********");
     printf("\n***********\n");
     printf("\n\nparametros incorrectos\n");
     printf("Calcula a diferencia entre dous n\243meros\n");  
     printf("\n\nUso:\n\n%s minuendo sustraendo\n",ptaux);       
     printf("\nEn donde minuendo e sustraendo son os n\243meros a restar en coma flotante\n\n");
     system("pause");
}

//***************************
//Función que comproba se unha cadea se corresponde con un número 
//recibe : dirección da cadea
//devolve: 1 se corresponde
//         0 se non corresponde
//***************************

int ereal(char *ptcadea){
     int band=1, contpuntos=0,i;
     
     for(i=0;ptcadea[i];i++){
     //admitimos '+' '-' de 1º
        if(i==0) {
                  if (ptcadea[i]!='+' && ptcadea[i]!='-' &&  ptcadea[i]!='.' &&  !(ptcadea[i]>='0' && ptcadea[i]<='9'))band=0;
        }else if(ptcadea[i]!='.' && !(ptcadea[i]>='0' && ptcadea[i]<='9')) band=0;
        
                        
     }               
                  if(ptcadea[i]!='.') contpuntos++;
                       //en todos '0'-'9' '.'
                       //solo admitimos 
                             
     
     
     
        if(contpuntos>1) band=0;
        
        return band;
}
