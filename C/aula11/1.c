#include <stdio.h>

int main(void)
{
	int idades[5][13];
	float md_idades[5];
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 13; j++)
		{
			printf("Idade da %d° pessoa do %d° grupo: ", j+1, i+1);
			scanf(" %d", &(idades[i][j]));
		}
	}
	for(int i = 0; i < 5; i++)
	{
		int n_abaixo_md = 0;
		for(int j = 0; j < 13; j++)
		{
			md_idades[i] += idades[i][j];
		}
		md_idades[i] = md_idades[i]/13.0;
		for(int j = 0; j < 13; j++)
		{
			if(idades[i][j] < md_idades)n_abaixo_md++;
		}
		printf("Idade da %d° pessoa do %d° grupo: ", i+1);
	}
	return 0;
}