#include <stdio.h>
#include <math.h>
int main (void){
    float a,b,c, total;
    scanf("%f %f %f",&a,&b,&c);
    /*     
    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B.
    */
    //Letra A:
    total = (a * c)/2;
    printf("TRIANGULO: %.3f\n",total);
    //Letra B:
    total = pow(c, 2) * 3.14159;
    printf("CIRCULO: %.3f\n",total);
    //Letra C:
    total = ((a+b)*c)/2;
    printf("TRAPEZIO: %.3f\n",total);
    //Letra D:
    total = pow(b,2);
    printf("QUADRADO: %.3f\n",total);
    //Letra E:
    total = a * b;
    printf("RETANGULO: %.3f\n",total);

    return 0;
}