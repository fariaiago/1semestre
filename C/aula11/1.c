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
			scanf(" %d", idades[i][j]);
		}
	}
	return 0;
}