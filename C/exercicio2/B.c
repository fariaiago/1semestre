#include <stdio.h>

int ler_int(char*);

int main(void)
{
	int tipo_tinta = ler_int("Qual o tipo de tinta a ser usada?(\"0\" para lavável e \"1\" para acrílica): ");
	int area = ler_int("Quantos metros quadrados serão pintados?: ");

	//Acrílica
	if(tipo_tinta)
	{
		printf("Custo: R$%.2f\n", 10.0*area);
	}
	else
	{
		printf("Custo: R$%.2f\n", 15.0*area);
	}
	return 0;
}

int ler_int(char *txto)
{
	int n = 0;
	printf("%s", txto);
	scanf("%d", &n);

	return n;
}