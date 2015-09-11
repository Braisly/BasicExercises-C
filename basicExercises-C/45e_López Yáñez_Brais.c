/*
  Descripcion: Funcion á que lle enviamos unha direccion e un numero e que vai representar 
  un numero de caracteres escrito. A funcion le por teclado e garda a partir da direccion 
  unha cadea recibida cun maximo de caracteres.
  Autor: Brais L.Y.
  Data: 26/01/10 09:27
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void lercadea(char *,int);
int gardarcaracter(char *,int,unsigned char,int);


int main()
{
    char nome[70],direccion[60];
    
    printf("Teclea un nome: ");
    lercadea(nome, sizeof(nome));
        
    printf("Teclea unha direccion: ");
    lercadea(direccion, sizeof(direccion));
    printf("\nNome: %s\n",nome);
    printf("\nDireccion: %s\n",direccion);
    
    fflush(stdin);
    getchar();
}


void lercadea(char *cadea,int maximo)
{
    unsigned char car,f;  
    int posicion=0,i,aux;  //vaime decir onde estou no vector (onde vou gardar o proximo)
    *cadea=0;
    do
    {
        //printf("-- %s\n",v);
        car=getch();     //ler caracter  
        switch(car)
        {
           case 13: 
                   return;
                   
           case 8: //si é retroceso (8) borrar ultimo caracter leido                                            
                  // ARREGLO EN PANTALLA
                  //co vector vacio => non facer nada
                  if(posicion==0) 
                      putchar(7); //"putchar(7);" emite un pitido
                      
                  //co vector a medias ou cheo => borrar ultimo caracter                      
                  else
                  {
                      if(*(cadea+posicion)==0)    //if(v[posicion]==0)
                      { 
                         putchar(8);   //borrar
                         putchar(' '); //pinto espacio en branco                         
                         putchar(8);   //borrar               
                  // ARREGLO EN MEMORIA
                         posicion--;
                         *(cadea+posicion)=0;
                      }
                      else
                      {
                          putchar(8);
                          printf("%s ",cadea+posicion); 
                          for(i=0;i<strlen(cadea+posicion)+1;i++)
                              putchar(8);
                          posicion--;
                          for(i=0;*(cadea+posicion+i)!=0;i++) 
                              *(cadea+posicion+i)=*(cadea+posicion+i+1); // movemos todolos caracteres seguintes ó borrado unha posición á esquerda
                      }
                  }
                  break;
                  
           case 224:   //si é 224
                   {
                       if(kbhit())
                       {     //si kbhit é verdadeiro (devolve verdadeiro)
                          f=getch();  //ler o 2º caracter 
                          switch(f)
                          {          
                              case 71: 
                                      while(posicion>0)
                                      {
                                         putchar(8);
                                         posicion--;
                                      }
                                      break;   
                                             
                              case 75:     //si 2º == 75 (flecha atras)
                                     //   movernos un caracter cara atras   
                                     if(posicion==0) 
                                        putchar(7);
                                     else
                                     {     
                                        putchar(8);  //en pantalla
                                        posicion--;  //en memoria
                                     }
                                     break;
                                     
                              case 77:     //si 2º == 77 (flecha adiante)                                         
                                     // movernos adiante un caracter  
                                     if(*(cadea+posicion)==0)
                                       putchar(7);
                                     else
                                     {
                                         if(posicion==0)
                                         {
                                           putchar(32);
                                           printf("\b%c",*(cadea+posicion));                                  
                                         }
                                         else
                                         {
                                             putchar(32);
                                             printf("\b%c",*(cadea+posicion));                                  
                                         }
                                         posicion++;                                     
                                     }
                                     break; 
                                                                                    
                              case 79: 
                                       printf("%s",cadea+posicion);
                                       posicion=strlen(cadea);
                                       break;
                                       
                              case 82:
                                      *cadea=*cadea+1;
                                      break;
                                       
                              case 83: 
                                       if(*(cadea+posicion)==0) 
                                          putchar(7);
                                       else
                                       {
                                              printf("%s ",cadea+posicion+1);                                                     
                                           
                                              for(i=0;i<strlen(cadea+posicion+1)+1;i++)
                                                 putchar(8);   
                                              
                                              // ARREGLO EN MEMORIA
                                              for(aux=posicion;*(cadea+aux)!=0;aux++)
                                                  *(cadea+aux)=*(cadea+aux+1);                                       
                                       }
                                       break;
                          
                           }         
                                     //en outro caso: 
                                     //         non facer nada                          
                       }
                       else    //gardo "Ó" leído
                           posicion=gardarcaracter(cadea,posicion,car,maximo);
                       break; 
                   } 
                   default:   // en outro caso gardar o caracter             
                              // =putchar...   "putc(c,stdout);" // mostra na pantalla o caracter
                          posicion=gardarcaracter(cadea,posicion,car,maximo);
        }
    }while(1);
}


int gardarcaracter(char *cadea,int posicion,unsigned char car,int max)
{
     if(posicion<max-1)
     {
         if(*(cadea+posicion)==0)
            *(cadea+posicion+1)=0;
         putchar(car);
         *(cadea+posicion)=car; // gardar o caracter
         posicion++;
     }
     else
         putchar(7);
     return posicion;
}
