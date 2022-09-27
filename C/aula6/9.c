#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Uso: ./9 <Salário> <Número de filhos>\n");
		return 1;
	}
	float salario = atof(argv[1]);
	int n_filhos = atoi(argv[2]);
}