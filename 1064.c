#include <stdio.h>

int main (void){
    float n [6];
    float media = 0;
    int aux = 0;
    for(int i = 0; i < 6; i++){
        scanf("%f",&n[i]);
        if(n[i] > 0 ){
            aux ++;
            media += n[i];
        }
    }
    media = media / aux;
    printf("%d valores positivos\n", aux);
    printf("%.1f",media);
    return 0;
}