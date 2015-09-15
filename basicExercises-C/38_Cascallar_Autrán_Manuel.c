/*
Enunciado: escribir os n primeiros numeros da serie de fibonacci en donde n se introduce por teclado(cantidad de numeros que se 
         imprimen)(serie de fibonacci:dous primeiros numeros: 1, 1, o seguinte suma dos anteriores: 2 ,suma de 1+2 3, 5 ,
         8, 13,... 
Autor: Manuel Cascallar Autrán
Data: 27-11-2009
*/

int main(){
    //encabezamento
    system("title 38_Cascallar_Autrán_Manuel");    
    system("color 1F");
    system("cls");
    printf("SERIE DE FIBONACCI\n");
    printf("==================\n");
    
    //declaramos as variables
    int n, x;
    printf("Introduce a cantidade de numeros da serie de fibonacci que queres imprimir:\n");
    scanf("%d",&n);//introducimos a cantidade de numeros da serie de fibonacci que queremos imprimir
    int c[n];
    
    //damos os dous primeiros valores da serie
    c[0]=1;
    c[1]=1;
    
    //para obter o "n" valor da serie de fibonacci sumamos os dous anteriores.
    for(x=1;x<n;x++){
    c[x+1]=c[x-1]+c[x];
    }
    
    //imprimimos os "n" primeiros valores da serie de fibonacci.
    printf("\nOs"); printf(" %d ",n); printf("primeiros numeros da serie de fibonacci son:\n");
    for(x=0;x<n;x++){
          printf("%d\n",c[x]);
          }
    
    system("pause");
}
