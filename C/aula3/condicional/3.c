#include <stdio.h>

int main(void)
{
	int lds[3];
	printf("Qual os lados do triângulo? ");
	scanf(" %d %d %d", &lds[0], &lds[1], &lds[2]);

	if(!(lds[0] < lds[1] + lds[2]) || !(lds[1] < lds[0] + lds[2]) || !(lds[2] < lds[0] + lds[1]))
	{
		printf("Erro: não é triângulo\n");
		return 1;
	}

	if(lds[0] == lds[1] && lds[0] == lds[2])
	{
		printf("Triângulo equilátero\n");
	}
	else if(lds[0] == lds[1] || lds[0] == lds[2] || lds[1] == lds[2])
	{
		printf("Triângulo isóceles\n");
	}
	else
	{
		printf("Triângulo escaleno.\n");
	}
	return 0;
}