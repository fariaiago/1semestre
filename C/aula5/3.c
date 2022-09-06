#include <stdio.h>

int main(int argc, char *argv[])
{
	int soma = 0;
	char cntnuar_exec = '+';
	do
	{
		int num = 0;
		printf("Número? ");
		scanf(" %d", &num);
		soma += num;
		printf("Continuar? (\"=\" para não, \"+\" sim) ");
		scanf(" %c", &cntnuar_exec);
	}
	while(cntnuar_exec == '+');
	printf("Soma: %i\n", soma);
}