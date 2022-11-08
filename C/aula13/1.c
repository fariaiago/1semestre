#include <stdio.h>

void tabela(char *, int[], int);

int main(void)
{
	int vaxx[5][20]
	=92	21	72	6	92	91	41	42	65	98	63	58	16	81	26	54	84	99	39	60
67	99	54	69	94	29	3	23	94	39	20	5	40	69	1	100	7	46	76	59
75	70	70	46	87	65	87	23	48	7	72	100	28	81	20	55	84	100	79	16
56	5	34	52	30	36	93	67	16	64	19	35	45	49	66	7	59	97	3	44
82	81	6	19	38	37	37	14	28	35	98	11	68	20	59	73	47	55	43	33;
	int posto[5], dia[20];
	int total[1];
	for(int i = 0; i < 20; i++)
	{
		int p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0;
		printf("Vacinações no %d° dia: ", i+1);
		scanf(" %d %d %d %d %d", &p0, &p1, &p2, &p3, &p4);
		//Vaxx por posto
		posto[0] += p0;
		posto[1] += p1;
		posto[2] += p2;
		posto[3] += p3;
		posto[4] += p4;

		//Vaxx por dia
		dia[i] = p0 + p1 + p2 + p3 + p4;

		//Vaxx total
		total[0] += p0 + p1 + p2 + p3 + p4;
	}
	int outro = 0;
	do
	{
		int relatorio = 0;
		printf("Mostrar relatório de vacinações:\n\"0\" = por posto, \"1\" = por dia e \"2\" = por mês");
		scanf(" %d", &relatorio);
		switch(relatorio)
		{
			case 0:
				tabela("Vacinações(por posto):", posto, 5);
			case 1:
				tabela("Vacinações(por dia):", dia, 20);
			case 2:
				tabela("Vacinações(total):", total, 1);
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
	for(int i = 0; i < n; n++)
	{
		printf("|%d	%d|", i+1, vet[i]);
	}
}