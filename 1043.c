#include <stdio.h>

int main() {
    float a,b,c, auxiliar;
    scanf("%f %f %f",&a,&b,&c);
    /*módulo em c = fabs(x) => |x|
    condição de existência para um triângulo
    | b - c | < a < b + c
    | a - c | < b < a + c
    | a - b | < c < a + b*/
    if(a >= b+c || b>=c+a || c>= a+b){
        auxiliar = (a + b)*c/2;
        printf("Area = %.1f\n",auxiliar);
    } else{
        auxiliar = a + b +c;
        printf("Perimetro = %.1f\n",auxiliar);
    }

    return 0;
}