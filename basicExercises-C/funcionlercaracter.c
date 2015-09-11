/*
  Autor: Brais L.Y.
  Data: 26/01/10 09:27
  Descripcion: Funcion á que lle enviamos una direccion e un numero e que vai representar 
  un numero de caracteres escrito. A funcion le por teclado e garda a partir da direccion 
  unha cadea recibida cun maximo de caracteres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// kbhit,strlen

void lercadea(); 

int main(){
   char nome[30],direccion[60]; 
   printf("\n1 Nome= %s\n",nome);
   printf("\n1 Direccion= %s\n",direccion);
   
   printf("\n Teclea un nome: ");
   lercadea(nome,sizeof(nome));//lonxitude da variable nome
   printf("\n Nome= %s\n",nome);
   
    printf("\n2 Nome= %s\n",nome);
   printf("\n2 Direccion= %s\n",direccion);
   
   printf("\n Teclea unha direccion: ");
   lercadea(direccion,sizeof(direccion));
   printf("\n Dirección= %s\n",direccion);
   
   printf("\n3 Nome= %s\n",nome);
   printf("\n3 Direccion= %s\n",direccion);
   system("pause");
}

void lercadea(char *cadea, int maximo)
{
    unsigned char c,f,aux;  
    int posicion=0;  //vaime decir onde estou no vector (onde vou gardar o proximo)
    int i; // auxiliar para o bucle
    int largo; // variable para controlar a lonxitude do vector
    *cadea=0; // "VALOR DO QUE APUNTA CADEA, FACELO = A 0.  //
    do{
        c=getch();//ler caracter  
        switch(c){
                  case 13:
                          return;
                          break;
                  case 8: //si é retroceso (8) borrar ultimo caracter leido                                            
           
                  // ARREGLO EN PANTALLA
                          //co vector vacio => non facer nada
                          if(posicion==0) putchar(7); //"putchar(7);" emite un pitido
                          //co vector a medias ou cheo => borrar ultimo caracter                      
                          else {
                                if(*(cadea+posicion)==0){ //ANTES (v[posicion]==0); 
                                 // ** APUNTES (!v[posicion]) == (v[posicion]==0)  // estamos o final
                                                   putchar(8);   //borrar
                                                   putchar(' '); //pinto espacio en branco                         
                                                   putchar(8);   //borrar               
                  // ARREGLO EN MEMORIA
                                                   posicion--;
                                                   *(cadea+posicion)=0;// ANTES v[posicion]=0;
                                                  }
                               else{// estamos polo medio
                                   // Eliminamos caracter de pantalla
                                   
                                   putchar(8);  
                                   printf("%s ",cadea+posicion);
                                   // ANTES printf("%s ",&v[posicion]);
                                   for(i=0;i<strlen(cadea+posicion)+1;i++)  putchar(8);
                                   // for(i=0;i<strlen(&v[posicion])+1;i++)  putchar(8);
                                   
                                   
                                   // Eliminamos da memoria o caracter
                                   i=posicion-1;
                                   while(*(cadea+i)!=0){  //ANTES  while(v[i]!=0){
                                                  *(cadea+i)=*(cadea+i+1); //ANTES    v[i]=v[i+1];
                                                  i++;                                                    
                                                 } 
                                   posicion--;                                                                                     
                                   }
                                   }
                         
                       // printf("\n** %d %s **\n",strlen(v),v);
                  break;
                  
                  case 224:{   //si é 224
                             if(kbhit()){ //si kbhit é verdadeiro (devolve verdadeiro)
                                         f=getch();  //ler o 2º caracter 
                                         switch(f){                  
                                                   case 75:     //si 2º == 75 (flecha atras)
                                                                //         movernos un caracter cara atras   
                                                           if(posicion==0) putchar(7);
                                                           else{     
                                                                putchar(8);  //en pantalla
                                                                posicion--;  //en memoria
                                                               }
                                                           break;
                                                   case 77:
                                                                //si 2º == 77 (flecha adiante)
                                                                //         movernos adiante un caracter
                                                           gardarcaracter(cadea, &posicion, c, int max);     
                                                          /* if (*(cadea+posicion)==0) putchar(7);
                                                           else if(posicion==0){ 
                                                                                putchar(32);
                                                                                printf("\b%c",(cadea+posicion)); // ANTES printf("\b%c",v[posicion]);                                                           
                                                                               }                                                          
                                                           else{
                                                                putchar(32);
                                                               printf("\b%c",(*(cadea+posicion))); // ANTES printf("\b%c",v[posicion]);                                                             
                                                               }*/
                                                          // posicion++; }                                                                      
                                                           break;   
                                                  case 71:     //si 2º == 71 (tecla inicio)
                                                                //        levar o cursor ó primeiro caracter
                                                            while(posicion>0){
                                                                              posicion--;
                                                                              printf("\b");
                                                                              }
                                                                                                                                                                    
                                                            break; 
                                                  case 79:     //si 2º == 79 (tecla fin)
                                                                //     levar o cursor ó ultimo caracter
                                                           printf("%s",(cadea+posicion));
                                                           posicion=strlen(cadea);                                                   
                                                           break;
                                          
                                                           
                                                  }
                                         }                                                                                                          
                             else{  //gardo "Ó" leído
                                 putchar(c);
                                 *(cadea+posicion)=c; // ANTES v[posicion]=c; // gardar o caracter
                                 posicion++;
                                 *(cadea+posicion)=0; // ANTES v[posicion]=0; // gardar o caracter
                                }
                           break; 
                  
                          }
                  default:   // en outro caso gardar o caracter             
                         // =putchar...   "putc(c,stdout);" // mostra na pantalla o caracter
                         largo=strlen(cadea);
                         putchar(c);
                          *(cadea+posicion)=c; // ANTES v[posicion]=c; // gardar o caracter
                         posicion++;
                         if(posicion>largo) *(cadea+posicion)=0;                        
                  }     
     }while(1);
     system("pause");  
}  

void gardarcaracter (char *cadea, int posicion, char c)
 if(posicion<max-1){
     if (*(cadea+*posicion)==0)) *(cadea+*posicion+1)=0;
     else if(posicion==0){ 
     putchar(c);//mostro na pantalla o caracter
     *(cadea+*posicion)=c;// gardar o caracter
     (*posicion)++; } //poñemonos na posicion
 else     putchar(7);
     return;                                                       
       
   //posicion++; 
   }   


