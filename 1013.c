#include <stdio.h>
#include <math.h>

int main (void){
    int a,b,c,maiorAB,maiorTotal;
    scanf("%d %d %d",&a,&b,&c);
    maiorAB = (a + b + abs(a-b))/2;
    maiorTotal = (maiorAB + c + abs(maiorAB-c))/2;
    printf("%d eh o maior\n",maiorTotal);
    return 0;
}