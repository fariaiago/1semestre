#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Uso: ./9 <Salário> <Número de filhos>\n");
		return 1;
	}
	float salario = atof(argv[1]), valor = salario;
	int n_filhos = atoi(argv[2]);

	//Desconto imposto
	valor = salario > 3000 ? valor * 1.1 : valor * 1.05;

	//
	if(salario <= 1000)
	{
		valor += 300;
	}
	else if(salario <= 3000)
	{
		valor += 150;
	}

	valor += 200*n_filhos;

	printf("Valor a receber: %f\n", valor);
	return 0;
}