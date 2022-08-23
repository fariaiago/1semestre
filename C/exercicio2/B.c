#include <stdio.h>

int main(void)
{
	int tipo_tinta = 0, mtros_quad = 0;

	printf("Qual o tipo de tinta a ser usada?(\"0\" para lavável e \"1\" para acrílica):");
	scanf("%d", &tipo_tinta);

	printf("Quantos metros quadrados serão pintados?:");
	scanf("%d", &mtros_quad);

	//Acrílica
	if(tipo_tinta)
	{
		printf("Custo: R$%.2f\n", 10.0*mtros_quad);
	}
	else
	{
		printf("Custo: R$%.2f\n", 15.0*mtros_quad);
	}
	return 0;
}