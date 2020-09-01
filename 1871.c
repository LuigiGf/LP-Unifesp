#include <stdio.h>

int main(void){
    int num1,num2,i, soma;
    int unidades[9];

    while(scanf("%d %d",&num1, &num2) && (num1 != 0 || num2 != 0)){
        soma = num1 + num2;
        //loop que separa todas as unidades
        for(i = 0; i <= 10; i++){
            unidades[i] = soma % 10;
            soma = soma / 10;
        }
        //loop que printa o vetor invertido
        for(i = 10; i >= 0; i--){
            if(unidades[i] != 0){
                printf("%d",unidades[i]);
            }
        }
        printf("\n");
    }
    return 0;
}