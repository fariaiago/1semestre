#include <stdio.h>

int main(void)
{
	int maior = -2147483648;
	int num[15];
	for(int i = 0; i < 15; i++)
	{
		int n = 0;
		scanf( "%d", &n);
		num[i] = n;
		if(n > maior)maior = n;
	}
	printf("Maior número: %i\n", maior);
	for(int i = 0; i < 15; i++)
	{
		printf("%d ", num[15 - i - 1]);
	}
	printf("\n");
	return 0;
}