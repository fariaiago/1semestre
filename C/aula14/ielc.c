#include <stdio.h>

float notabi(float, float);
void aprov(float, float);

int main(void)
{
	int cont = 0;
	do
	{
		float notafi = 0.0f, np = 0.0f, nt = 0.0f, freq = 0.0f;
		for(int i = 0; i < 4; i++)
		{
			printf("Nota da prova e trabalho do %d° bi: ", i+1);
			scanf(" %f %f", &np, &nt);
			notafi += notabi(np, nt);
		}
		notafi = notafi/4;
		printf("Frequência: ");
		scanf(" %f", &freq);
		aprov(notafi, freq);
		printf("Continuar(\"0\" não, \"1\" sim): ");
		scanf(" %d", &cont);
	}
	while(cont);
	return 0;
}

float notabi(float nota_p, float nota_t)
{
	return (nota_p*6+nota_t*4)/10;
}

void aprov(float nf, float freq)
{
	if(freq < 0.75)
	{
		printf("Reprovado por falta\n");
		return;
	}
	if(nf >= 7)
	{
		printf("Aprovado\n");
		return;
	}
	printf("Recuperação\n");
}