#include <stdio.h>

int main (void){
    int dia1,hora1,min1,seg1,totalSeg1;
    int dia2,hora2,min2,seg2,totalSeg2;
    int totalSeg, totalMin, totalHoras, totalDias;
    float seg,min,horas,dias;
    
    //entrada de dados 1
    scanf("Dia %d",&dia1);
    scanf("%d : %d : %d\n",&hora1,&min1,&seg1);
   
    //entrada de dados 2
    scanf("Dia %d",&dia2);
    scanf("%d : %d : %d\n",&hora2,&min2,&seg2);

    //calculo para converter tudo em segundos
    totalSeg1 = (((((dia1 * 24) + hora1)*60)+min1)*60)+ seg1;
    totalSeg2 = (((((dia2 * 24) + hora2)*60)+min2)*60)+ seg2;
    
    //diferença entre segundos
    totalSeg = totalSeg2 - totalSeg1;
    
    //calculo para segundos
    min = totalSeg / 60;
    totalSeg = totalSeg % 60;
    totalMin = min;

    //calculo para minutos
    horas = totalMin / 60;
    totalMin = totalMin % 60;
    totalHoras = horas;
    
    //calculo para horas
    dias = totalHoras / 24;
    totalHoras = totalHoras % 24;
    
    //calculo para dias
    totalDias = dias;
    
    
    //printar todos os dados
    printf("%d dias(s)\n",totalDias);
    printf("%d hora(s)\n",totalHoras);
    printf("%d minuto(s)\n",totalMin);
    printf("%d segundo(s)\n",totalSeg);
    
    return 0;
}