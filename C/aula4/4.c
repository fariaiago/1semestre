#include <stdio.h>

int main()
{
	for(int i = 0; i < 15; i++)
	{
		printf("%i\n", i);
	}
}

float ler_imc(int n_pssoa)
{
	int e_mlhr = 0;
	float ps = 0, altra = 0;
	printf("Qual o sexo(\"0\" para mulher, \"1\" para homem)peso(em kg), altura(em metros) da %i° pessoa: ", n_pssoa + 1);
	scanf(" %d %f %f",e_mlhr, ps, altra);
}