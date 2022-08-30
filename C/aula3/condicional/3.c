#include <stdio.h>

int main(void)
{
	int ldA = 0, ldB = 0, ldC = 0;
	printf("Qual os lados do triângulo? ");
	scanf(" %d %d %d", &ldA, &ldB, &ldC);

	for(int i = 0; i < 3; i++)
	{
		
	}
	if(ldA == ldB && ldA == ldC)
	{
		printf("Triângulo equilátero\n");
	}
	else if(ldA == ldB || ldA == ldC || ldB == ldC)
	{
		printf("Não é eleitor ainda.\n");
	}
	else
	{
		printf("Eleitor facultativo.\n");
	}
}