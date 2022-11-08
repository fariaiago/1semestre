#include <stdio.h>

void tabela(char *, int[], int);

int main(void)
{
	int vaxx[5][20][4]
	={{{71, 65, 75, 68, 95, 45, 100, 34, 99, 30, 61, 41, 84, 69, 32, 91, 87, 95, 56, 39},
{80, 46, 8, 97, 94, 49, 69, 14, 9, 74, 53, 36, 73, 10, 79, 86, 93, 49, 26, 13},
{32, 64, 87, 46, 8, 80, 71, 88, 28, 29, 57, 35, 63, 42, 80, 75, 57, 78, 94, 81},
{93, 27, 70, 56, 80, 76, 44, 61, 58, 39, 40, 79, 22, 37, 15, 12, 50, 82, 24, 65},
{2, 3, 94, 93, 95, 70, 94, 31, 33, 68, 28, 31, 79, 5, 94, 31, 95, 92, 48, 12}},
{{84, 67, 54, 40, 10, 92, 11, 27, 34, 43, 80, 87, 23, 65, 42, 48, 47, 74, 81, 69},
{69, 54, 35, 74, 10, 74, 39, 8, 48, 56, 93, 67, 6, 76, 83, 40, 40, 1, 89, 49},
{98, 89, 66, 100, 70, 41, 58, 29, 66, 67, 64, 25, 78, 26, 20, 26, 20, 49, 10, 20},
{12, 69, 6, 91, 39, 47, 86, 83, 33, 93, 96, 9, 47, 69, 86, 79, 8, 93, 11, 41},
{37, 76, 30, 73, 70, 83, 60, 79, 6, 17, 29, 17, 64, 46, 87, 53, 99, 72, 70, 39}},
{{20, 65, 34, 53, 4, 52, 15, 58, 18, 25, 86, 94, 86, 43, 38, 17, 77, 64, 70, 95},
62, 1, 63, 75, 17, 22, 97, 66, 33, 16, 68, 55, 37, 88, 11, 52, 7, 7, 86, 59},
69, 50, 92, 98, 6, 83, 70, 94, 78, 19, 40, 67, 44, 45, 11, 79, 70, 52, 64, 90
7, 3, 97, 51, 18, 55, 67, 41, 92, 96, 80, 8, 63, 49, 29, 85, 96, 24, 3, 78
{62, 71, 73, 10, 33, 23, 75, 6, 96, 1, 88, 96, 10, 78, 1, 74, 93, 24, 79, 46
78, 76, 71, 86, 39, 52, 98, 88, 16, 86, 56, 96, 38, 41, 71, 63, 20, 1, 77, 38
88, 68, 28, 14, 72, 98, 88, 19, 44, 1, 11, 26, 10, 87, 68, 50, 89, 43, 65, 74},
48, 1, 1, 55, 80, 100, 4, 44, 70, 86, 42, 40, 49, 83, 3, 94, 31, 78, 80, 93},
45, 6, 39, 41, 26, 89, 55, 33, 8, 11, 91, 86, 30, 58, 85, 39, 90, 43, 14, 68},
95, 1, 72, 2, 4, 38, 17, 12, 6, 39, 67, 27, 69, 95, 59, 24, 7, 9, 94, 54}}};
	int posto[5], dia[20], mes[4];
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			int p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0;
			printf("Vacinações no %d° dia do %d° mês: ", j+1, i+1);
			scanf(" %d %d %d %d %d", &p0, &p1, &p2, &p3, &p4);
			//Vaxx por posto
			posto[0] += p0;
			posto[1] += p1;
			posto[2] += p2;
			posto[3] += p3;
			posto[4] += p4;

			//Vaxx por dia
			dia[j] = p0 + p1 + p2 + p3 + p4;

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