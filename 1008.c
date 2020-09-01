#include <stdio.h>

int main(){
    int func,horas;
    double val, sal;
    scanf("%d %d %lf", &func, &horas, &val);
    sal = val * horas;
    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2lf\n", sal);
    return 0;
}