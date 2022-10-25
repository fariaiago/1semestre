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
			if(idades[i][j]*1.0f < md_idades[i])n_abaixo_md++;
		}
		printf("Idades abaixo da média no %d° grupo: %d, %f\n", i+1, n_abaixo_md, md_idades[i]);
	}
	return 0;
}