#include <stdio.h>

int main(){
    //peça 1
    int cod1, numPecas1;
    double valorUni1, total1;

    //peça 2
    int cod2, numPecas2;
    double valorUni2, total2;

    //total peças
    double valTotal;

    //peças 1 entrada e saida
    scanf("%d %d %lf", &cod1, &numPecas1, &valorUni1);
    total1 = numPecas1 * valorUni1;

    //peças 2 entrada e saida
    scanf("%d %d %lf", &cod2, &numPecas2, &valorUni2);
    total2 = numPecas2 * valorUni2;

    //Cálculo e exibição do valor a pagar
    valTotal = total1 + total2;
    printf("VALOR A PAGAR: R$ %.2lf\n",valTotal);

    return 0;
}