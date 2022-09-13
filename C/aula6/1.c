#include <stdio.h>

int main(void)
{
	int idade = 0;
	printf("Qual sua idade? ");
	scanf(" %d", &idade);

	if(idade > 18 && idade < 60)
	{
		printf("Eleitor obrigatório.\n");
	}
	else if(idade < 16)
	{
		printf("Não é eleitor ainda.\n");
	}
	else
	{
		printf("Eleitor facultativo.\n");
	}
}