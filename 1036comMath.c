#include <stdio.h>
#include <math.h>
int main() {

    double a, b ,c, x1, x2, raiz;
     
    scanf("%lf %lf %lf",&a,&b,&c);
    raiz = (b*b)-(4*a*c);
    x1 = (-b+(sqrt(raiz)))/(2*a);
    x2 = (-b-(sqrt(raiz)))/(2*a);
    if(raiz < 0 || a == 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    return 0;
}