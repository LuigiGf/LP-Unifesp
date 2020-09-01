#include <stdio.h>
int main (void){
    int notas;
    double valorNota[6] = {100, 50, 20, 10, 5, 2};
    int n[7];
    int aux;
    //valores das notas
    scanf("%d",&notas);
    //conversão necessária para usar o operador de resto com double
    aux = notas * 100;

    //nota 100 conversão
    n[0] = aux / 10000;
    aux = aux % 10000;

    //nota 50 conversão
    n[1] = aux / 5000;
    aux = aux % 5000;
    
    //nota 20 conversão
    n[2] = aux / 2000;
    aux = aux % 2000;
   
    //nota 10 conversão
    n[3] = aux / 1000;
    aux = aux % 1000;
   
    //nota 5 conversão
    n[4] = aux / 500;
    aux = aux % 500;
   
    //nota 2 conversão
    n[5] = aux / 200;
    aux = aux % 200;
    
    //nota 1 conversão
    n[6] = aux / 100;
    aux = aux % 100;

    //Printar todos os dados requisitados com loop para simplificação de digitação:
    printf("%d\n",notas);
    printf("%d nota(s) de R$ 100,00\n",n[0]);
    printf("%d nota(s) de R$ 50,00\n",n[1]);
    printf("%d nota(s) de R$ 20,00\n",n[2]);
    printf("%d nota(s) de R$ 10,00\n",n[3]);
    printf("%d nota(s) de R$ 5,00\n",n[4]);
    printf("%d nota(s) de R$ 2,00\n",n[5]);
    printf("%d nota(s) de R$ 1,00\n",n[6]);
    return 0;
}