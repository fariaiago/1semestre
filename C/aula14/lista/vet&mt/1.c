#include <stdio.h>

int main(void)
{
	int A[] = {1, 0, 5, -2, -5, 7};
	printf("A = %d, %d, %d, %d, %d, %d\n", A[0], A[1], A[2], A[3], A[4], A[5]);
	int soma = A[0]+A[1]+A[5];
	printf("Soma = %d\n", soma);
	A[4] = 100;
	printf("A[4] = %d\n", A[4]);
	for(int i = 0; i < 6; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}
	return 0;
}