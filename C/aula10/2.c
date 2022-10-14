#include <stdio.h>

int main(void)
{
	float num[20];
	float cnst = 0.0;
	printf("Constante: ");
	scanf(" %f", &cnst);
	printf("Números:\n");
	for(int i = 0; i < 20; i++)
	{
		float n = 0;
		scanf( "%f", &n);
		num[i] = n + cnst;
	}

	for(int i = 0; i < 20; i++)
	{
		printf("%f ", num[i]);
	}
	printf("\n");
	return 0;
}