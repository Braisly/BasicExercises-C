/*
Descrición: Codificar unha mensaxe. Pide texto e sustituimos cada caracter con cada ASCII seguinte, e despois descodificámolo.
Autor: Brais L.Y.
Data: 11-01-2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    
    system ("title Codificar unha mensaxe - Brais L.Y.");
    system ("color 0A");
    unsigned char a[100]={0}, b; //Igualando o vector a 0 eliminamos a porquería sobrante, si non chegamos a 100
    int c;
    
    printf ("Introduce a mensaxe:\n");
    for(c=0;((c<99) && (a[c-1]!=13));c++){
      a[c]=getche();} 
      
      a[c-1]=0; //Eliminamos a porquería
    
    printf ("\250Queres codificar a mensaxe ou descodificala? C (Codificar), D (Descodificar)");
    scanf ("%c", &b);
    fflush(stdin);
    
    
    if ((b=='C')||(b=='c')){ 
               
     for (c=0;a[c]!=0;c++){
         a[c]=a[c]+1;}    
     
    
     printf ("A mensaxe codificada \202:  %s", a);}

    
    
    
    if ((b=='D')||(b=='d')) {
       for (c=0;a[c]!=0;c++){
            a[c]=a[c]-1;}         
       printf ("A mensaxe codificada \202:  %s", a);}    
    
    printf ("\n");
    system ("pause");}
