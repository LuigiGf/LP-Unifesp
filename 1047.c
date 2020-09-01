#include <stdio.h>
int main()
{
    int horaInicial,horaFinal,minTotal,horaTotal,minInicial,minFinal;
    scanf("%d%d%d%d", &horaInicial, &minInicial, &horaFinal, &minFinal);
    if(horaInicial==minFinal && horaFinal==minFinal && minFinal==minInicial)
    {
        minTotal=minInicial-minFinal;
        horaTotal=24+horaInicial-horaFinal;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaInicial==horaFinal && minFinal>minInicial)
    {
        minTotal=minFinal-minInicial;
        horaTotal=horaInicial-horaFinal;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaInicial==horaFinal && minInicial>minFinal)
    {
        minTotal=60-minInicial+minFinal;
        horaTotal=24-horaInicial+horaFinal-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(minInicial==minFinal && horaInicial<horaFinal)
    {
        minTotal=0;
        horaTotal=horaFinal-horaInicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(minInicial==minFinal && horaInicial>horaFinal)
    {
        minTotal=0;
        horaTotal=24-horaInicial+horaFinal;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaFinal>horaInicial && minFinal>minInicial)
    {
        minTotal=minFinal-minInicial;
        horaTotal=horaFinal-horaInicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaInicial<horaFinal && minInicial>minFinal)
    {
        minTotal=60-minInicial+minFinal;
        horaTotal=horaFinal-horaInicial-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaInicial>horaFinal && minInicial<minFinal)
    {
        minTotal=minFinal-minInicial;
        horaTotal=24-horaInicial-1+horaFinal;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    else if(horaInicial>horaFinal && minInicial>minFinal)
    {
        minTotal=60+minFinal-minInicial;
        horaTotal=24+horaFinal-horaInicial-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minTotal);
    }
    return 0;
}