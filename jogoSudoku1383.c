//bibliotecas utilizadas
#include <stdio.h>
#include<stdlib.h>

//inicializador de funções
int verificadorMatrizlinha(int matriz[9][9]);
int verificadorMatrizcoluna(int matriz[9][9]);
int verificadorMatriztrestres(int matriz[9][9]);

//função principal
int main (void)
{

    //declaração de variáveis.
    int matriz[9][9];
    int linha,coluna,i = 1,entrada;
    int verificadorLinha, verificadorColuna, verificadorMatriztres;

    //valor de quantidade de entradas de matriz.
    scanf("%d",&entrada);

    //loop de quantidade de matrizes
    do
    {
        //loop de entrada de dados da matriz
        for(linha = 0; linha < 9; linha++)
        {
            for (coluna = 0; coluna < 9; coluna++)
            {
                scanf("%d",&matriz[linha][coluna]);
            }
        }

        //verificadores de condição de cada hipótese por funções
        verificadorLinha = verificadorMatrizlinha(matriz);
        verificadorColuna = verificadorMatrizcoluna(matriz);
        verificadorMatriztres = verificadorMatriztrestres(matriz);

        //print de dados do programa
        printf("Instancia %d\n", i);
        if(verificadorLinha == 1 && verificadorColuna == 1 && verificadorMatriztres == 1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
        printf("\n");
        i++;
        entrada--;
    } while (entrada != 0);
    return 0;
}
//verificador matriz linha a linha
int verificadorMatrizlinha (int matriz[9][9])
{
    int linha, coluna, *vet;
    for(linha=0;linha<9;linha++){
            vet = (int*)calloc(10,sizeof(int));
            for(coluna=0;coluna<9;coluna++){
                if( vet[matriz[linha][coluna]] == 0 ){
                    vet[matriz[linha][coluna]] = matriz[linha][coluna];
                }else{
                    return 0;
                }
            }
        }
    return 1;
}
//verificador matriz coluna a coluna
int verificadorMatrizcoluna (int matriz[9][9])
{
    int linha, coluna,*vet;
    for(linha=0;linha<9;linha++){
            vet = (int*)calloc(10,sizeof(int));
            for(coluna=0;coluna<9;coluna++){
                if( vet[matriz[coluna][linha]] == 0 ){
                    vet[matriz[coluna][linha]] = matriz[coluna][linha];
                }else{
                    return 0;
                }
            }
        }
    return 1;
}
//verificador matriz tres a tres
int verificadorMatriztrestres(int matriz[9][9]){
    int linha, coluna,L,C, O[9];
    for(L=0;L<3;L++){
        for(C=0;C<3;C++){
            for(linha=0;linha<9;linha++){
                O[linha]=0;
            }

            for(linha=0+(L*3);linha<3+(L*3);linha++){
                for(coluna=0+(C*3);coluna<3+(C*3);coluna++){
                    if(O[matriz[linha][coluna] - 1] != 0){
                        return 0;
                    }
                    O[matriz[linha][coluna] - 1] = 1;
                }
            }

        }
    }
    return 1;
}