#include <stdio.h>

int main (void){
    float n [6];
    int aux = 0;
    for(int i = 0; i < 6; i++){
        scanf("%f",&n[i]);
        if(n[i] > 0 ){
            aux ++;
        }
    }
    printf("%d valores positivos\n", aux);
    return 0;
}