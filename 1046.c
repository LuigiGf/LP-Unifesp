#include <stdio.h>
#include <math.h>
int main(void){
    int inicioJogo, fimJogo,total;
    scanf("%d %d",&inicioJogo,&fimJogo);
    if(fimJogo == inicioJogo){
        total = 24;
    }
    else if(fimJogo > inicioJogo){
        total = inicioJogo - fimJogo;
        total = abs(total);
    }
    else if(fimJogo < inicioJogo){
        total = (24 - inicioJogo) + fimJogo;
    }

    printf("O JOGO DUROU %d HORA(S)\n",total);
    return 0;
}