#include <stdio.h>

int main(void)
{
	int idades[10];
	int freq[10][8];
	float sang[10][8];
	for(int i = 0; i < 10; i++)
	{
		printf("Idade do %d° atleta", i+1);
		scanf(" %d", &(idades[i]));
		for(int j = 0; j < 8; j++)
		{
			printf("Frequência cardiaca e nível de O2 no sangue do %d° atleta na %d° semana:", i+1, j+1);
			scanf(" %d %f", &(freq[i][j]), &(sang[i][j]));
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("-- Relatório do Atleta %d --\n", i+1);
		for(int j = 0; j < 8; j++)
		{}
	}
	return 0;
}