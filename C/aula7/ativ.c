#include <stdio.h>
#include <string.h>

int main(void)
{
	int n_atend = 0;

	while(n_atend < 50)
	{
		char nome[16];
		printf("Qual a próxima pessoa a ser atendida? ");
		scanf(" %s", nome);
		if(strcmp(nome, "fim") == 0)break;

		printf("A senha de %s é %.3i\n", nome, n_atend);
		n_atend++;
	}

	return 0;
}