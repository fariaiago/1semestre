#include <stdio.h>

float soma(float, float);
float subtracao(float, float);
float divisao(float, float);
float multiplicacao(float, float);
int statusAprovacao(float, float);

int main(void)
{
	float r = multiplicacao(soma(divisao(10, 3), 5), 1.5f);
	printf("r %f\n", r);
	printf("Aprov %d\n", statusAprovacao(0.91f, 7.5f));
	return 0;
}

float soma(float a, float b)
{
	return a + b;
}

float subtracao(float a, float b)
{
	return a - b;
}

float divisao(float a, float b)
{
	return a / b;
}

float multiplicacao(float a, float b)
{
	return a * b;
}

/*
* 0 - Aprovado
* 1 - Reprovado por falta
* 2 - Reprovado (Nota final < 6)
*/
int statusAprovacao(float freq, float nf)
{
	if(freq < 0.8f)
	{
		return 1;
	}

	if(nf < 6)
	{
		return 2;
	}
	return 0;
}