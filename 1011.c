#include <stdio.h>
 
int main() {
 
    int r ;
    double pi = 3.14159, v;
    scanf("%d",&r);

    v = (4/3.0)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",v);

    return 0;
}