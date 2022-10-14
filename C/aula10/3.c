#include <stdio.h>

int main(void)
{
	int maior = -99999999
	int num[15];
	for(int i = 0; i < 15; i++)
	{
		int n = 0;
		scanf( "%d", &n);
		num[i] = n;
	}

	for(int i = 0; i < 15; i++)
	{
		printf("%d ", num[15 - i - 1]);
	}
	printf("\n");
	return 0;
}