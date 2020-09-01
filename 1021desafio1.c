#include <stdio.h>
int main (void){
    double notas;
    double valorMoeda[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    double valorNota[6] = {100, 50, 20, 10, 5, 2};
    int n[6], m[6];
    int aux;
    //valores das notas
    scanf("%lf",&notas);
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

    //moeda 1 conversão
    m[0] = aux / 100;
    aux = aux % 100;

    //moeda 0.5 conversão
    m[1] = aux / 50;
    aux = aux % 50;

    //moeda 0.25 conversão
    m[2] = aux / 25;
    aux = aux % 25;

    //moeda 0.1 conversão
    m[3] = aux / 10;
    aux = aux % 10;

    //moeda 0.05 conversão
    m[4] = aux / 5;
    aux = aux % 5;

    //moeda 0.01 conversão
    m[5] = aux / 1;
    aux = aux % 1;

    //Printar todos os dados requisitados com loop para simplificação de digitação:
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ %.2lf\n",n[0],valorNota[0]);
    printf("%d nota(s) de R$ %.2lf\n",n[1],valorNota[1]);
    printf("%d nota(s) de R$ %.2lf\n",n[2],valorNota[2]);
    printf("%d nota(s) de R$ %.2lf\n",n[3],valorNota[3]);
    printf("%d nota(s) de R$ %.2lf\n",n[4],valorNota[4]);
    printf("%d nota(s) de R$ %.2lf\n",n[5],valorNota[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2lf\n",m[0],valorMoeda[0]);
    printf("%d moeda(s) de R$ %.2lf\n",m[1],valorMoeda[1]);
    printf("%d moeda(s) de R$ %.2lf\n",m[2],valorMoeda[2]);
    printf("%d moeda(s) de R$ %.2lf\n",m[3],valorMoeda[3]);
    printf("%d moeda(s) de R$ %.2lf\n",m[4],valorMoeda[4]);
    printf("%d moeda(s) de R$ %.2lf\n",m[5],valorMoeda[5]);

    return 0;
}