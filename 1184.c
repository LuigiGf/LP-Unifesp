#include <stdio.h>

int main (void){
    float matriz[12][12];
    float soma = 0, media = 0;
    int linha, coluna, div = 0;
    char entrada;

    scanf("%c", &entrada);

    for (linha = 0; linha < 12; linha++){

        for (coluna = 0; coluna < 12; coluna++){

        scanf("%f", &matriz[linha][coluna]);

        }
    }

    if (entrada == 'S'){

        for (linha = 0; linha < 12; linha++){

            for (coluna = 0; coluna < 12; coluna++){

                if (linha > coluna){

                soma += matriz[linha][coluna];

                }
            }
        }

        printf("%.1f\n", soma);

    }
    else{

        if (entrada == 'M'){

        for (linha = 0; linha < 12; linha++){

            for (coluna = 0; coluna < 12; coluna++){

                if (linha > coluna){

                    media += matriz[linha][coluna];
                    div++;

                }
            }
        }

        printf("%.1f\n", media/div);

        }
    }
    return 0;
}