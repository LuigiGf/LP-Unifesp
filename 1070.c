#include <stdio.h>

int main () {
    int valores, i, cont = 0;
    scanf("%d", &valores);

    for (i = valores; cont < 6; i++){
        if (i % 2 != 0){

        printf("%d\n", i);
        cont++;
        }
    }
    return 0;
}