#include <stdio.h>
int main (void){
    int codigo, quantidade;
    float preco[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d %d",&codigo, &quantidade);
    if(codigo == 1)
    printf("Total: R$ %.2f\n",preco[0]*quantidade);
    else if(codigo == 2)
    printf("Total: R$ %.2f\n",preco[1]*quantidade);
    else if(codigo == 3)
    printf("Total: R$ %.2f\n",preco[2]*quantidade);
    else if(codigo == 4)
    printf("Total: R$ %.2f\n",preco[3]*quantidade);
    else if(codigo == 5)
    printf("Total: R$ %.2f\n",preco[4]*quantidade);

   return 0;
}