#include <stdio.h>

int main(){
    int distancia,tempo;

    scanf("%i",&distancia);
    tempo = (60 * distancia) / 30;
    
    printf("%i minutos\n",tempo);

    return 0;
}