#include <stdio.h>
int main(void) {

    int tempo, horas, minutos, segundos;
    scanf("%d", &tempo);
    //tempo em horas
    horas = tempo / 3600;
    //tempo em minutos
    minutos = (tempo - (horas * 3600)) / 60;
    //tempo em segundos
    segundos = (tempo - (horas * 3600) - (minutos * 60));
    
    printf("%d:%d:%d\n" ,horas ,minutos ,segundos);

    return 0;

}