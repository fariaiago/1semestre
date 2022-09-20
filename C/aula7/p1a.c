#include <stdio.h>

typedef struct atleta
{
	int idade;
	float oxi_sang[9];
	float freq_card[8];
} atleta;

atleta criar_atleta(int);

int main(void)
{
	atleta atletas[10];
	for(int i = 0; i < 10; i++)
		atletas[i] = criar_atleta(i+1);
}

atleta criar_atleta(int i)
{
	atleta a;
	printf("Registre as informações do atleta %i\n"
			"Concentração de oxigênio no sangue(-1 para sair):\n", i);

	int n_sang = 0;
	float sm_sang = 0.0;
	while(n_sang < 9)
	{
		scanf(" %f", &(a.oxi_sang[n_sang]));
		if(a.oxi_sang[n_sang] == -1 || n_sang == 8)
		{
			a.oxi_sang[n_sang] = sm_sang
			break;
		}
		n_sang++;
	}
	return a;
}