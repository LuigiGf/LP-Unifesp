#include <stdio.h>

int main(){
    char nome;
    double salFix, totVendas, total;
    scanf("%s %lf %lf", &nome, &salFix, &totVendas);
    total = salFix + (totVendas* 0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}