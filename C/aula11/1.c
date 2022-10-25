#include <stdio.h>

int main(void)
{
	//int idades[5][13];
	int idades = {{34, 44, 79, 6, 98, 80, 62, 54, 97, 87, 84, 23, 100}, {38, 53, 12, 20, 79, 88, 62, 69, 60, 49, 62, 69, 89}, {63, 13, 74, 36, 33, 32, 78, 2, 95, 39, 9, 94, 19},
		{29, 44, 10, 4, 23, 86, 32, 5, 87, 69, 93, 83, 94}, {63, 12, 51, 90, 82, 62, 24, 66, 35, 4, 68, 33, 75}}
	float md_idades[5];
	/*for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 13; j++)
		{
			printf("Idade da %d° pessoa do %d° grupo: ", j+1, i+1);
			scanf(" %d", &(idades[i][j]));
		}
	}*/
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
		printf("Idades abaixo da média no %d° grupo: ", i+1);
	}
	return 0;
}