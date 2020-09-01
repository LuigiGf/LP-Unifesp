#include <stdio.h>
#include <string.h>

int main (void){
    int qTeste, posicao,ascii;

    int i, j, aux;

    char entrada[50];


    scanf("%d",&qTeste);
    //loop que analisa quantidade de entradas
    for(i = 0; i < qTeste; i++){
        scanf("%s",&entrada);
        scanf("%d",&posicao);
        //loop que analisa comprimento de entrada e executa a condição
        for(j = 0; j < strlen(entrada);j++){
            if(entrada[j] - posicao < 65){
                aux = (entrada[j] - posicao) + 26;
            }else{
                aux = entrada[j] - posicao;
            }
            printf("%c",aux);
        }
        printf("\n");
    }

    return 0;
}