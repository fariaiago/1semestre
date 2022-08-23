#include <stdio.h>

int main(void)
{
	float vlor = 0;
	//Preço da compra
	printf("Preço:");
	scanf(%f, vlor);
	printf("\n");
	if(vlor > 100)
	{
		vlor = vlor*0.9;
	}

	printf("Valor a ser pago: R$%2f\n", vlor);
	return 0;
}