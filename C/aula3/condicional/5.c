#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso: ./5 <tipo de investimento> <Valor> <N° meses>\n"
		"Tipos válidos: \"0\" poupança(5%%), \"1\" renda fixa(25%%)\n");
		return 1;
	}

	int tpo = atoi(argv[1]), mses = atoi(argv[3]);;
	float quntia = atof(argv[2]);

	float taxa = tpo ? 1.25 : 1.05;
	for(int i = 0; i < mses; i++)
	{
		quntia = quntia * taxa;
	}

	printf("Valor: %.2f\n", quntia);
	return 0;
}