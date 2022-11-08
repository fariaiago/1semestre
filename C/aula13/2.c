#include <stdio.h>

void tabela(char *, int[], int);

int main(void)
{
	int vaxx[4][5][20], posto[5] = {0,0,0,0,0}, dia[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, mes[4] = {0,0,0,0};
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			int p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0;
			int p0 = vaxx[i][0][j], p1 = vaxx[i][1][j], p2 = vaxx[i][2][j], p3 = vaxx[i][3][j], p4 = vaxx[i][4][j];
			printf("Vacinações no %d° dia do %d° mês: ", j+1, i+1);
			scanf(" %d %d %d %d %d", &p0, &p1, &p2, &p3, &p4);
			//Vaxx por posto
			posto[0] += p0;
			posto[1] += p1;
			posto[2] += p2;
			posto[3] += p3;
			posto[4] += p4;

			//Vaxx por dia
			dia[j] += p0 + p1 + p2 + p3 + p4;

			//Vaxx por mês
			mes[i] += p0 + p1 + p2 + p3 + p4;
		}
	}
	int outro = 0;
	do
	{
		int relatorio = 0;
		printf("Mostrar relatórios de vacinações\n\"0\" = por posto, \"1\" = por dia e \"2\" = por mês\n");
		scanf(" %d", &relatorio);
		switch(relatorio)
		{
			case 0:
				tabela("Vacinações(por posto):", posto, 5);
				break;
			case 1:
				tabela("Vacinações(por dia):", dia, 20);
				break;
			case 2:
				tabela("Vacinações(por mês):", mes, 4);
				break;
			default:
				break;
		}
		printf("Outro relatorio? \"0\" não, \"1\" sim: ");
		scanf(" %d", &outro);
	}
	while(outro);
	return 0;
}

void tabela(char *titulo, int vet[], int n)
{
	printf("%s\n", titulo);
	for(int i = 0; i < n; i++)
	{
		printf("|%d	%d|\n", i+1, vet[i]);
	}
}