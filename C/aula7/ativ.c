#include <stdio.h>

int main(void)
{
	int n_atend = 0, cntnr = 0;
	do
	{
		char nome[16];
		printf("Qual a próxima pessoa a ser atendida? ");
		scanf(" %s ", nome);
		printf("%s, senha %2d", nome, n_atend);
		n_atend++;
	}
	while(cntnr && n_atend < 50);
	return 0;
}