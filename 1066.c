#include <stdio.h>

int main () {

    int i, numeros;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &numeros);

        if (numeros % 2 == 0){
            pares++;
        }
        if (numeros % 2 != 0){
            impares++;
        }
        if (numeros > 0){
            positivos++;
        }
        if (numeros < 0){
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    
    return 0;
}