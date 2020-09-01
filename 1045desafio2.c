#include <stdio.h>
#include <math.h>
int main (void){
    /*se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES*/
    float a,b,c,aux;
    scanf("%f %f %f", &a,&b,&c);
    //transformação ordem decrescente:
    //faz o A se tornar B caso B seja maior que A
    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }
    //faz o A se tornar o C caso C seja maior que A
    if (a < c){
        aux = a;
        a = c;
        c = aux;
    }
    //faz o B se tornar o C caso C seja maior que B
    if (b < c){
        aux = b;
        b = c;
        c = aux;
    }

    //condição de existência de triangulo
    if(!(a>= b+c)){
        if(pow(a, 2) == pow(b, 2) + pow(c, 2))
            printf("TRIANGULO RETANGULO\n");
        
        if(pow(a, 2) > pow(b, 2) + pow(c, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        
        if(pow(a, 2) < pow(b, 2) + pow(c, 2))
            printf("TRIANGULO ACUTANGULO\n");
        
        if(a == b && a == c)
                printf("TRIANGULO EQUILATERO\n");
        
        if((a == b && a != c) || (a == c && a != b) || (b == c && c != a))
                printf("TRIANGULO ISOSCELES\n");
         
    } else{
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
}