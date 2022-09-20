#include <stdio.h>
#include <string.h>

int main(void)
{
	int n_atend = 0;
	char nome[16];
	while(strcmp(nome, "fim") != 0 && n_atend < 50)
	{

		printf("Qual a próxima pessoa a ser atendida? ");
		scanf(" %s ", nome);
		printf("A senha de %s é %2.d\n", nome, n_atend);
		n_atend++;
	}

	return 0;
}