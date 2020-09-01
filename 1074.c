#include <stdio.h>

int main () {

    int entrada, i, valores;

    scanf("%d", &entrada);

    for (i = 0; i < entrada; i++){
        
        scanf("%d", &valores);

        if ((valores % 2 == 0) && valores > 0){
            printf("EVEN POSITIVE\n");
        }
        else if ((valores % 2 == 0) && valores < 0){
            printf("EVEN NEGATIVE\n");
        }
        else if((valores % 2 !=0) && valores > 0){
            printf("ODD POSITIVE\n");
        }
        else if ((valores % 2 != 0) && valores < 0){
            printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");
        }
    }

    return 0;
}
