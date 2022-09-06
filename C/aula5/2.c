#include <stdio.h>

int main(void)
{
	int n_idades = 0, media = 0, cntnuar_exec = 0;
	do
	{
		int idade = 0;
		printf("Qual a idade? ");
		scanf(" %d", &idade);
		media += idade;
		if(idade >= 18)
			printf("Maior de idade\n");
		else
			printf("Menor de idade\n");
		printf("Continuar? (\"0\" para não, \"1\" sim) ");
		scanf(" %d", &cntnuar_exec);
		n_idades++;
	}
	while(cntnuar_exec);
	printf("N° de idades: %i, Média das idades: %f\n", n_idades, media*1.0/(n_idades*1.0));
}