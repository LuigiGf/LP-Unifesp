#include <stdio.h>
#include <math.h>
int main (void){
    //ponto 1
    float x1,y1;
    //ponto 2
    float x2,y2;
    //distancia entre dois pontos
    float distancia;
    
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.4f\n",distancia);
    return 0;
}