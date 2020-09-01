#include <stdio.h>
void ordenarCrescente(int valor1, int valor2, int valor3)
{
    int menor, meio, maior;
    if(valor1 < valor2 && valor1 < valor3){
        menor = valor1;
        if(valor2 < valor3){
            meio = valor2;
            maior = valor3;
        }else{
            meio = valor3;
            maior = valor2;
        }
    }else if(valor2 < valor1 && valor2 < valor3){
        menor = valor2;
        if(valor1 < valor3){
            meio = valor1;
            maior = valor3;
        }else{
            meio = valor3;
            maior = valor1;
        }
    }else{
        menor = valor3;
        if(valor1 < valor2){
            meio = valor1;
            maior = valor2;
        }else{
            meio = valor2;
            maior = valor1;
        }
    }
    printf("%d\n%d\n%d\n", menor, meio, maior);
}
int main()
{
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    ordenarCrescente(valor1, valor2, valor3);
    printf("\n%d\n%d\n%d\n", valor1, valor2, valor3);
    return 0;
}