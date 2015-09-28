/*
Enunciado: operacións con dous ou máis parámetros
Autor: Manuel Cascallar Autrán
Data: 09/04/2010
*/

#include<stdio.h>
#include<stdlib.h>


void axuda(char *nomeprograma);
int ereal(char *ptcadea);

int main(int argc, char * argv[]){//por ser unha dirección un asterisco e por ser unha dirección que   
                                   //apunta a un vector outro asterisco (ou corchetes ao final)
    system("title 50_Cascallar_Autran_Manuel");
    double primeiro, segundo;
    float resultado=0; 
    int x;
    if(argc<4) axuda(argv[0]);
    else {
         for(x=1;x<argc-1;x+=2){
         if(argc<4) axuda(argv[0]);
         
             else if(!ereal(argv[x]) || !ereal(argv[x+2])) axuda(argv[0]); 
                  else {
                       if(x==1)primeiro=atof(argv[x]);
                       segundo=atof(argv[x+2]);
                       if (*argv[x+1]=='-'){
                          printf("\n\n%.2f - %.2f = %.2f \n\n",primeiro, segundo, primeiro-segundo);
                          resultado=primeiro-segundo;

                       }
                       else if (*argv[x+1]=='+'){
                            printf("\n\n%.2f + %.2f = %.2f \n\n",primeiro, segundo, primeiro+segundo);
                            resultado=primeiro+segundo;
                
                            }
                       else if (*argv[x+1]=='x'){
                            printf("\n\n%.2f * %.2f = %.2f \n\n",primeiro, segundo, primeiro*segundo);
                            resultado=primeiro*segundo;
                           
                            }
                       else if (*argv[x+1]=='/'){
                            printf("\n\n%.2f / %.2f = %.2f \n\n",primeiro, segundo, primeiro/segundo);
                            resultado=primeiro/segundo;
                                
                            }
                     }
                            primeiro=resultado;
                            system("pause");
             

             
    }
    printf("Resultado final: %.2f",resultado);
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
     printf("\n\t***********");
     printf("\n\t***********\n");
     printf("\t***     ***");
     printf("\n\t***AXUDA***\n");
     printf("\t***     ***");
     printf("\n\t***********");
     printf("\n\t***********\n");
     printf("\n\nparametros incorrectos\n");
     printf("Calcula operaci\242ns matem\240ticas entre varios n\243meros\n");  
     printf("\n\nUso:\n\n%s elemento1 operaci\242n1 elemento2 [operacion2 elemento3...]\n",ptaux);
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
