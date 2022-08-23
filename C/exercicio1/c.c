#include <stdio.h>

int main(void) {
	int n1, n2, n3;
	float media;

	scanf("%d %d %d", &n1, &n2, &n3);
	media = (float) (n1 + n2 + n3) / 3;
	printf("%.2f ", media);
	if(media > 5)
	{
		printf("é maior que 5\n");
	}
	else
	{
		printf("não é maior que 5\n");
	}
}