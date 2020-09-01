#include <stdio.h>
#include <string.h>

int main (void){

    char palavra1[50], palavra2[50];
    int aux, casos, maiorPalavra,comprimento1,comprimento2;
    
    scanf("%d",&casos);
    //loop que inicia o teste para os casos
    while (casos)
    {
        scanf("%s %s",palavra1,palavra2);
        //medir o comprimento das strings para descobrir a maior
        comprimento1 = strlen(palavra1);
        comprimento2 = strlen(palavra2);
        //comparar os comprimentos
        if (comprimento1 > comprimento2)
            maiorPalavra = comprimento1;
        else
            maiorPalavra = comprimento2;
        //loop de troca de letras
        while(maiorPalavra){
            
            if (aux < comprimento1)
                printf("%c",palavra1[aux]);
            if (aux < comprimento2)
                printf("%c",palavra2[aux]);
                
            aux++;
            maiorPalavra--;

        }

        printf("\n");
        aux = 0;
        casos--;
    }
    return 0;
}