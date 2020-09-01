#include <stdio.h>

int main ()
{

	float salario, nivel1, nivel2, nivel3;

	scanf("%f", &salario);

	if (salario <= 2000.0)
		printf("Isento\n");
	else
	{

		salario -= 2000.0;
		if (salario <= 1000.0)
		{

			nivel1 = salario*0.08;
			printf("R$ %.2f\n", nivel1);
		}
		else
		{

			nivel1 = 80.0;
			salario -= 1000.0;
			if (salario <= 1500.0)
			{

				nivel2 = salario*0.18;
				printf("R$ %.2f\n", nivel1+nivel2);

			}
			else
			{

				nivel2 = 270.0;
				salario -= 1500.0;
				nivel3 = salario*0.28;
				printf("R$ %.2f\n", nivel1+nivel2+nivel3);

			}
		}
	}
	return 0;
}