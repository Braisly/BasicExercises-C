/*
facer unha función que calcule a^b sendo estes enteiros sin utilizar pow

*/

int potencia(int a, int b){
    int c=1, d;
    for(d=0 ;d<b ;d++){
    c=c*a;
    }
    return c;    
    
    
    
}

int main(){
    system("title 33_Cascallar_Autrán");    
    system("color 0A");
    system("cls");
    printf("POTENCIA DE UN NUMERO\n");
    printf("=====================\n");
    
    int x, a, b;
    printf("Introduce un n\243mero:\n");
    scanf("%d",&a);
    printf("\nO n\243mero anterior elevase a:\n");
    scanf("%d",&b);
    x=potencia(a ,b );
    printf("\nO resultado \202:");
    printf("\n%d\n",x);
    
 
 system("pause");   
}
