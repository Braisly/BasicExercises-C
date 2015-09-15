/*
Enunciado: tecleamos unha fecha e comprobar si é correcta, incorrecto é o 40 de mayo por ejemplo.
Autor: Manuel Cascallar Autrán
Data: 13-11-2009
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
    //declaramos as variables
    int a, mes, ano;
    int dia[]={31,28,31,30,31,30,31,31,30,31,30,31};   
    
    
    system("Title 30_Cascallar_Autrán_Manuel");
    system("color 88");
    system("cls");
    
    printf("COMPROBAR SI A FECHA E CORRECTA\n");
    printf("===============================\n\n");   
    
    //introducimos o dia da fecha
       printf("Escribir un d\241a: ");
       scanf("%d",&a);
       printf("\n");
    //introducimos o mes da fecha   
       printf("Escribir un mes: ");
       scanf("%d",&mes);
       printf("\n");    
    //introducimos o ano da fecha   
       printf("Escribir un ano: ");
       scanf("%d",&ano);
       printf("\n");
    
    /*si o resto de dividir o ano entre 400 é igual a 0, ou o de dividilo entre 4 é igual a 0, excepto si este coincide 
    con que o resto de divilo entre 100 é igual a 0,(sempre que o ano sea posterior a 1582) entonces o ano é bisiesto e 
    polo tanto febreiro terá un dia máis*/
    
    if((ano%400==0 || (ano%100!=0 && ano%4==0))&&(ano>=1582)){
                   dia[1]=dia[1]+1;
                   }

    //si o dia da fecha introducida é menor que 1 a fecha é incorrecta               
    if(a<1){printf("Fecha Incorrecta\n");}
    /*si o ano é posterior a 1582 o mes está entre o 1 e o 12 e o día corresponde a un valor valido dentro de cada mes,
    a fecha é correcta*/
    else {if((ano>1582 && mes>=1 && mes<=12 && dia[mes-1]>=a)||(ano==1582 && ((mes>10 && mes<=12 && dia[mes-1]>=a) || ((mes==10) && a>14 && a<31)))){
                       printf("Fecha Correcta\n");}
     /*si o ano está entre o ano -46 e o 1582 o día está entre 1 e 30,ambos incluidos, e o mes está entre 1 e 12 
     (incluidos), a fecha é correcta pero solo segun o calendario juliano. E si o ano é 1582 antes do mes 10 (octubre) 
     e o día está entre 1 e 30 (ambos incluidos), a fecha é correcta. e sendo ese mesmo ano, o mes 10, é correcta antes 
     do día 5. Senón a fecha é incorrecta.*/                 
          else {if((((((ano>(-46)&&(ano<1582)))&&((a>0) && (a<=30)))&&((mes>0)&&(mes<13))) && (ano!=0)) || ((ano==1582) && ((mes>0 && mes<10) && (a>0 && a<=30)) || ((mes==10) && (a>0 && a<5))))  {
                 printf("Fecha correcta, pero seg\243n o calendario juliano\n");
                  }else printf("Fecha incorrecta\n"); 
                  }
                 
                  }

    system("pause");              
}
