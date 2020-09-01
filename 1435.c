#include <stdio.h>

int main (void){
    int entrada, linha, coluna, iniMatriz, fimMatriz, variavel;
    do
    {
        //entrada de dados no loop do exercicio
        scanf("%d",&entrada);
        //condição para o loop realmente rodar e evitar time exceeded no uri
        if(entrada != 0){
            //declaração da matriz e reset de dados da matriz
            int matriz [entrada][entrada];
            iniMatriz = 0;
            fimMatriz = entrada;
            variavel = 1;
            //loop de calculo da matriz
            do{
                for(linha = iniMatriz; linha < fimMatriz; linha++){
                    for(coluna = iniMatriz; coluna < fimMatriz; coluna++){
                        matriz[linha][coluna] = variavel;
                    }
                }
                
                fimMatriz--;
                iniMatriz++;
                variavel++;
            } while(fimMatriz != 0);
            //loop de impressão da resposta
            for (linha = 0; linha < entrada; linha++){
                for (coluna = 0; coluna < entrada; coluna++){
                    if (coluna == 0)
                        printf("%3hd", matriz[linha][coluna]);
                    else
                        printf(" %3hd", matriz[linha][coluna]);
                }
			printf("\n");
		}
		printf("\n");
        }
    } while (entrada != 0);
    return 0;
}