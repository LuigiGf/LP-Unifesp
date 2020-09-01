#include <stdio.h>
int main (void){
    int idade,dias,meses,anos;
    scanf("%d",&idade);
    //tempo em anos
    anos = idade / 365;

    //tempo em meses
    meses = (idade - (anos * 365)) / 30;

    //tempo em dias
    dias = idade - (anos * 365)  - (meses * 30);
    
    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);
    return 0;
}