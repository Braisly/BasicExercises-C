#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void lercadea(char *cadea);
int main(){
    unsigned char v[100];
    
    lercadea(v);
    
    system("pause");
}

void lercadea(char *cadea){
    unsigned char f,c;
    int posicion=0,i; // vaime decir onde estou no vector (onde vou gardar o proximo caracter)
    int aux, j, x, h, bandeira=0; 
    printf("Teclea un texto: ");
    do{
        c=getch(); //ler caracter
          
        switch (c){
               case 13: 
                      return;
                      //break;
               
               case 8: //si é retroceso(8)      
                       //borrar ultimo caracter leido   
                       
                       if (posicion==0) putchar(7);
                       else {
                            if(cadea[posicion]==0){ //esto é igual a =(!v[posicion])
                                putchar(8);//retrocede o cursor
                                putchar(' ');//imprime un espacio en blanco no lugar onde esta o cursor
                                putchar(8);//como na anterior instruccion o cursor avanza un lugar, retrocedese outra vez
                                
                                posicion--;
                                cadea[posicion]=0;
                            }
                            else {
    //--printf("\n%d\n", posicion);
                                 //eliminar caracter da pantalla
                                 putchar(8);
                                 printf("%s ",&cadea[posicion]);
                                 for(i=0;i<strlen(&cadea[posicion])+1;i++) putchar (8);
    
                                //eliminar da memoria o caracter a borrar
                                  
                                 for(i=posicion-1;i<strlen(cadea);i++){ cadea[i]=cadea[i+1]; 
                                 }
                            }  
                        }   
                               
                       break;
               case 224: //si é 224
                    if(kbhit()){
                                f=getch();//ler 2º caracter
                                switch (f){
                                           case 71://tecla inicio
                                                   if(posicion!=0){
                                                                   for(x=posicion;x>0;x--){
                                                                   putchar(8);                
                                                                   posicion--;     
                                                                   }
                                                   //printf("\n inicio %d  %d  %s",posicion, strlen(v), v);
                                                   }        
                                                   break;
                                           case 75: //2º == 75 (flecha atras)
                                                    // movernos un caracter cara atras
                                                    if(posicion!=0){
                                                    putchar(8); //en pantalla retrocedemos un caracter
                                                    posicion--; //en memoria retrocedemos unha posicion
                                                    }
                                                    else putchar(7);
                                                    
                                                    break;
                                           case 77: //2º == 77 (flecha adiante)
                                                    // movernos un caracter cara adiante
                                                    if(posicion<strlen(cadea)){
                                                                  putchar(cadea[posicion]);
                                                                  posicion++;
                                                    }
                                                    break;
                                           case 79://tecla fin
                                                   printf("%s",&cadea[posicion]);
                                                   posicion=strlen(cadea);
                                                   //printf("\n fin %d  %d  %s",posicion, strlen(v), v);        
                                                    break;
                   /***********************************************/
                                           case 83://tecla suprimir
                                                   if(cadea[posicion]!=0){
                                                                      for(h=posicion;h<strlen(cadea);h++){
                                                                                   cadea[h]=cadea[h+1];
                                                   
                                                                       } 
                                                                       //printf("movido %s",v);
                                                                               
                                                                       for(h=posicion;h<strlen(cadea);h++){
                                                                                                       putchar(cadea[h]);                       
                                                                       }               
                                                                       putchar(' ');
                                                                       for(h=posicion;h<strlen(cadea)+1;h++){
                                                                                                         putchar(8);                       
                                                                       }
                                                   }
                                                   else putchar(7);
                                                   break;
                                           case 82://tecla insertar
                                                   if(bandeira==0) bandeira=1;
//pulsas tecla insert(posicionase en insertar), 
                                                                   
                                                                   bandeira=!bandeira;
                                                   else bandeira=0;//bandeira=!bandeira
                                                   break; 
                                                    default:;                  
                //noutro caso:
                  // non facer nada
                         }
                  }
                  else   {
                         putchar(c); // mostro na pantalla o caracter
                         cadea[posicion]=c; // gardar o caracter
                         posicion++;
                         cadea[posicion]=0;
                         }
                         break;
               default: // en outro caso gardar o caracter
                    putchar(c); // mostro na pantalla o caracter
                    cadea[posicion]=c; // gardar o caracter
                    posicion++;
                    cadea[posicion]=0;
          }
      
     }while(1);       
     system("pause");
}
