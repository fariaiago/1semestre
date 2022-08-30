#include <stdio.h>
#include <math.h>

void ler_imc(int);

int main()
{
	for(int i = 0; i < 15; i++)
	{
		ler_imc(i+1);
	}
}

void ler_imc(int n_pssoa)
{
	float e_mlhr = 0, ps = 0, altra = 0;
	printf("Qual o sexo(\"0\" para mulher, \"1\" para homem)peso(em kg), altura(em metros) da %i° pessoa: ", n_pssoa);
	scanf(" %f %f %f", &e_mlhr, &ps, &altra);
	float imc = ps/pow(altra, 2);
	if(imc > 24.5f + e_mlhr*0.5f)
	{
		printf("Maior que peso ideal\n");
	}
	else if(imc < 18.0f + e_mlhr)
	{
		printf("Menor que peso ideal\n");
	}
	else
	{
		printf("Peso ideal\n");
	}
}