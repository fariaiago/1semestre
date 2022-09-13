#include <stdio.h>

int main(void)
{
	if(argc != 4)
	{
			return 1;
	}
	int exec = 0;
	do
	{
		int n_pssoa = 0, n_dias = 0, mlhas = 0, trans = 0;
		printf("Tamanho do grupo, estadia, em dias, n° milhas e se translado aeroporto-hotel: ");
		float vlor = (100*n_pssoa*n_dias) + (50*mlhas) + (trans ? 60 : 0);
		printf("Que fazer outro pacote?\"0\" não, \"1\" sim: ");
		scanf(" %d", &exec);
	}
	while(exec);
	return 0;
}