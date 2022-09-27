#include <stdio.h>

typedef struct atleta
{
	int idade;
	float oxi_sang[10];
	float freq_card[8];
} atleta;

atleta criar_atleta(int, int*, int*, int*);

int main(void)
{
	int n_sang_mnr86 = 0, n_idd_mnr16 = 0, n_idd_mr25 = 0;
	atleta atletas[10];
	for(int i = 0; i < 10; i++)
		atletas[i] = criar_atleta(i+1, &n_sang_mnr86, &n_idd_mnr16, &n_idd_mr25);
}

atleta criar_atleta(int i, int *n_sang_mnr86, int *n_idd_mnr16, int *n_idd_mr25)
{
	atleta a;
	int idade;
	printf("Registre as informações do atleta %i\n"
			"Idade do atleta:\n", i);
	scanf(" %d", &idade);

	int n_sang = 0;
	float sm_sang = 0.0;
	print("Concentração de oxigênio no sangue(-1 para sair):\n");
	while(n_sang < 9)
	{
		scanf(" %f", &(a.oxi_sang[n_sang]));
		if(a.oxi_sang[n_sang] == -1 || n_sang == 8)
		{
			a.oxi_sang[9] = sm_sang/n_sang;
			break;
		}
		sm_sang += a.oxi_sang[n_sang];
		n_sang++;
	}
	return a;
}