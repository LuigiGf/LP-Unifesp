#include <stdio.h>
int main (void){
    float reajuste [5] = {0.15, 0.12, 0.10, 0.07, 0.04};
    float salario,salarioNovo , ganho;
    scanf("%f",&salario);

    if(salario <= 400.0){
        salarioNovo = salario + (salario * reajuste[0]);
        ganho = salarioNovo - salario;
        printf("Novo salario: %.2f\n",salarioNovo);
        printf("Reajuste ganho: %.2f\n",ganho);
        printf("Em percentural: 15 %%\n");
    }
    else if(salario <= 800.0){
        salarioNovo = salario + (salario * reajuste[1]);
        ganho = salarioNovo - salario;
        printf("Novo salario: %.2f\n",salarioNovo);
        printf("Reajuste ganho: %.2f\n",ganho);
        printf("Em percentural: 12 %%\n");
    }
    else if(salario <= 1200.0){
        salarioNovo = salario + (salario * reajuste[2]);
        ganho = salarioNovo - salario;
        printf("Novo salario: %.2f\n",salarioNovo);
        printf("Reajuste ganho: %.2f\n",ganho);
        printf("Em percentural: 10 %%\n");
    }
    else if(salario <= 2000.0){
        salarioNovo = salario + (salario * reajuste[3]);
        ganho = salarioNovo - salario;
        printf("Novo salario: %.2f\n",salarioNovo);
        printf("Reajuste ganho: %.2f\n",ganho);
        printf("Em percentural: 7 %%\n");
    }  
    else{
        salarioNovo = salario + (salario * reajuste[4]);
        ganho = salarioNovo - salario;
        printf("Novo salario: %.2f\n",salarioNovo);
        printf("Reajuste ganho: %.2f\n",ganho);
        printf("Em percentural: 4 %%\n");
    }

    return 0;
}

/*#include <stdio.h>


float main () {

  float salario, reajuste;
  scanf("%f", &salario);

  if (salario >= 0 && salario <= 400){

    reajuste = salario*0.15;
    salario = salario + reajuste;
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 15 %%\n");

  }
  else{

      if (salario > 400 && salario <= 800){

        reajuste = salario*0.12;
        salario = salario + reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");


        }
        else{

          if (salario > 800 && salario <= 1200){

            reajuste = salario*0.1;
            salario = salario + reajuste;
            printf("Novo salario: %.2f\n", salario);
            printf("Reajuste ganho: %.2f\n", reajuste);
            printf("Em percentual: 10 %%\n");

          }
          else{

              if (salario > 1200 && salario <= 2000){
              reajuste = salario*0.07;
              salario = salario + reajuste;
              printf("Novo salario: %.2f\n", salario);
              printf("Reajuste ganho: %.2f\n", reajuste);
              printf("Em percentual: 7 %%\n");
            }
            else{

              reajuste = salario*0.04;
              salario = salario + reajuste;
              printf("Novo salario: %.2f\n", salario);
              printf("Reajuste ganho: %.2f\n", reajuste);
              printf("Em percentual: 4 %%\n");

            }
          }
        }
      }
}*/