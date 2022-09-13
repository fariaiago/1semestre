#include <stdio.h>

int main(void)
{
	if(argc != 4)
	{
		printf("Uso: <Número de pessoas no grupo> <Estadia> <Passagem> <Translado aeroporto-hotel>\n"
			"Estadia: Número de dias\n"
			"Passagem: Número de milhas\n"
			"Translado: \"0\" para não, \"1\" para sim\n");
			return 1;
	}
	int exec = 0;
	do
	{
		int n_pssoa = atoi(argv[1]), n_dias = atoi(argv[2]), mlhas = atoi(argv[3]), trans = atoi(argv[4]);
		float vlor = (100*n_pssoa*n_dias) + (50*mlhas) + (trans ? 60 : 0);
		printf("Que fazer outro pacote?\"0\" não, \"1\" sim: ");
		scanf(" %d", &exec);
	}
	while(exec);
	return 0;
}