#include <stdio.h>

int main(void)
{
	int num[10];
	for(int i = 0; i < 10; i++)
	{
		int n = 0;
		scanf( "%d", &n);
		num[i] = n;
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}