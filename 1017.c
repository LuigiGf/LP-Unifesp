#include <stdio.h>
int main (void){
    int tempo, velocidade;
    float quantLitros;
    scanf("%d %d",&tempo, &velocidade);
    quantLitros = (tempo*velocidade)/12.0;
    printf("%.3f\n",quantLitros);
    return 0;
}