#include <stdio.h>

int main(void)
{
	int vaxx[5][20], posto[5], dia[20];
	int total;
	for(int i = 0; i < 20; i++)
	{
		int p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0;
		printf("Vacinações no %d° dia: ", i+1);
		scanf(" %d %d %d %d ", &p0, &p1, &p2, &p3, &p4);
		//Vaxx por posto
		posto[0] += p0;
		posto[1] += p1;
		posto[2] += p2;
		posto[3] += p3;
		posto[4] += p4;

		//Vaxx por dia
		dia[i] = p0 + p1 + p2 + p3 + p4;
	}
	do
	{
		int relatorio = 0;
		printf("Mostrar relatório de vacinações:\n\"0\" = por posto, \"1\" = por dia e \"2\" = por mês");
		scanf(" %d", &relatorio);
		switch(relatorio)
		{
			case 0:
				nfor(f);
			case 1:
			case 2:
		}
	}
	while();
	return 0;
}

void nfor(char *texto, int[] vet, int n)
{
	for(int i = 0; i < n; n++)
	{
		printf("%s :%d", texto, i+1, vet[i]);
	}
}