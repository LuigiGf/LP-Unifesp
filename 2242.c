#include <stdio.h>
#include <string.h>

int main(void){
    //declaração das strings
    char risadas[60], vogais[60];
    //auxiliares
    int i, k=0, quantVogais;
    //pegando o dado das risadas
    scanf("%s", risadas);
    //loop de avaliação de vogais dentro da matriz
    for(i=0; risadas[i]; i++){
        //condicional caso a letra seja uma vogal
        if(risadas[i]=='u' || risadas[i]=='e' || risadas[i]=='i' || risadas[i]=='o' || risadas[i]=='a'){
            //caso seja vogal adcionar vogal a lista de vogais em determinado ponto
            vogais[k] = risadas[i];
            k++;
        }
    }
    vogais[k] = '\0';
    //medir quantidade de vogais
    quantVogais = strlen(vogais);
    //loop para condição de s ou n vogais
    for(k=quantVogais-1, i=0; quantVogais > i; i++, k--){
        if(vogais[i] != vogais[k]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}