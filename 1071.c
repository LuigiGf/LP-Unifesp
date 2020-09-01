#include <stdio.h>

int main() {
 int cont, x, y, aux, soma;
    
    while(scanf("%d%d", &x, &y) == 2){
        //reset da variável soma no loop
        soma = 0;
        
        //inverter os valores caso x seja maior que y
        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }
        
        //verificação para impar
        if(x % 2 != 0){
        //loop para soma de valores impares
            for(cont = x + 2; cont < y; cont++){
                if(cont % 2 != 0)
                    soma += cont;
                }
        }
        //caso seja par
        else{
        //loop de exclusao de valores par
            for(cont = x + 1; cont < y; cont++){
                if(cont %2 != 0){
                    soma += cont;
                }
            }
        }
        printf("%d\n",soma);
    }

    return 0;
}