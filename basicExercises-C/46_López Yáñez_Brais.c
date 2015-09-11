/*
Descrición: Almacenar unha pila, fas un vector de 10 elementos, e o programa mediante un menu permitiranos engadir un elemento a pila ou retirar un elemento da pila, ou consultar o último elemento da pila, coñecer o tamaño da pila e facer un listado completo da pila.
Autor: Brais L.Y.
Data: 08-02-2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void engade (int *,int *);
void retira (int *, int *);
void consulta (int *, int *);
void conhece (int *);
void listado (int *, int *);


int main (){ //Hai que intentar que non deixe meter máis de 10 elementos
 int a[10], contadore=-1;//(0)(eso é o que había antes) Ao estar declarada así, contadore esta apuntando ao primeiro libre, si ibamos metendo un numero sempre iba apuntando ao primeiro libre, (0), ahi gardaria o numero e pasaria ao seguinte!!
 unsigned char menu; 
  do {
  printf ("\n-----------------------------------------\n");
  printf ("                  MENU                   \n");   
  printf ("-----------------------------------------\n");
  printf ("1 - Engade un elemento a pila            \n");
  printf ("2 - Retira un elemento da pila           \n");
  printf ("3 - Consulta o ultimo elemento da pila   \n");
  printf ("4 - Conhece o tamanho da pila             \n");
  printf ("5 - Listado completo da pila             \n");
  printf ("6 - Sair                                 \n");
  printf ("-----------------------------------------\n\n");  
  menu=getch();
  switch (menu){  
    case '1': engade(a, &contadore); break; //A é un vector, entonces so temos que mandalo a 'a' pero contadore é unha variable, entonces temos que mandarlle a dirección
    case '2': retira (a, &contadore); break;
    case '3': consulta (a, &contadore); break;
    case '4': conhece (&contadore); break;
    case '5': listado (a, &contadore); break;}                   
 } while (menu!='6'); 
 system ("pause");   
}    


// &a ----> dirección propio a
// a -----> contido propio
// *a ----> contido do que apunta a
void engade (int *pta,int *ptcontadore){ // a garda a dirección
  printf ("Engade un numero:\n");
  if (*ptcontadore<10){ (*ptcontadore)++;
  pta=pta+*ptcontadore; // Dirección de a + o que apunta contadore
  scanf("%d", pta);}
  else { printf ("PILA CHEA DE 10 UNIDADES");}}

void retira (int *pta, int *ptcontadore){
  printf ("Vai a retirar un numero do vector!!\n");
  (*ptcontadore)--;
  pta=pta-1;}     
     
void consulta (int *pta, int *ptcontadore){
  printf ("Danos o ultimo elemento da pila!!!\n");
  printf ("%d", pta[*ptcontadore]);}
  
void conhece (int *ptcontadore){
  printf ("Danos o tamanho da pila!!!!!\n");
  printf ("%d", (*ptcontadore)+1);}       

void listado (int *pta, int *ptcontadore){
  int b;
  printf ("Ahi tes o listado completo da pila!!! Vamos!!! Que esta ben!!!!");
  for (b=0;b<=*ptcontadore;b++) printf ("%d", pta[b]);}
