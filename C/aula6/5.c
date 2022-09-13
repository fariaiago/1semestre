#include <stdio.h>

int main(void)
{
	int exec = 0;
	do
	{
		int n_pssoa = 0, n_dias = 0, mlhas = 0, trans = 0;
		printf("Tamanho do grupo, estadia, em dias, n° milhas e se translado aeroporto-hotel: ");
		scanf(" %d %d %d %d", &n_pssoa, &n_dias, &mlhas, &trans);
		float vlor = (100*n_pssoa*n_dias) + (50*mlhas) + (trans ? 60 : 0);
		if(n_pssoa > 10)
		{
			vlor *= 0.9;
		}
		else if (n_pssoa >= 4)
		{
			vlor *= 0.95;
		}
		printf("Preço final: R$%.2f\n", vlor);
		printf("Que fazer outro pacote? \"0\" não, \"1\" sim: ");
		scanf(" %d", &exec);
	}
	while(exec);
	return 0;
}