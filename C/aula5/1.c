#include <stdio.h>

int main(void)
{
	int n_idades = 0, cntnuar_exec = 0;
	do
	{
		int idade = 0;
		printf("Qual a idade? ");
		scanf(" %d", &idade);
		if(idade >= 18)
			printf("Maior de idade\n");
		else
			printf("Menor de idade\n");
		printf("Continuar? (\"0\" para não, \"1\" sim) ");
		scanf(" %d", &cntnuar_exec);
		n_idades++;
	}
	while(cntnuar_exec);
	printf("N° idades: %i\n", n_idades);

	return 0;
}