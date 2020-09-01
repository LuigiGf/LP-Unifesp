#include <stdio.h>

int main (void){

    int quantidade, valores, in = 0, out = 0;
    scanf("%d",&quantidade);

    for (int i = 0; i < quantidade; i++){
        scanf("%d",&valores);
        if(valores >= 10 && valores <= 20){
            in++;
        }
        else {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}