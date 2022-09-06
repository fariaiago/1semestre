#include <stdio.h>

int main(void)
{
	int i = 0, cont = 0;
	do
	{
		int idade = 0;
		printf("Qual a idade? ");
		scanf(" %d", &idade);
		if(idade >= 18)
			printf("Maior de idade\n");
		else
			printf("Menor de idade\n");
		printf("Continuar? (0 não, 1 sim) ");
		scanf(" %d", &cont);
		i++;
	}
	while(cont);
}