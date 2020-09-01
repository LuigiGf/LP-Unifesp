#include <stdio.h>
int main(void){
    int km;
    float totalCombustivel,consumoMedio;
    scanf("%d %f",&km, &totalCombustivel);
    consumoMedio = km / totalCombustivel;
    printf("%.3f km/l\n",consumoMedio);
    return 0;
}