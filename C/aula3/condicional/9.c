#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso: ./9 <área> <Região> <Se o lote é de esquina>\n"
			"Regiões: \"0\" para Norte, \"1\" para Sul\n"
			"De esquina: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
	int area = atoi(argv[1]), rg = atoi(argv[2]), esq = atoi(argv[3]);
	if(saldo_medio < 250.0)
	{
		printf("Saldo médio: %.2f, Crédito: %.2f\n", saldo_medio, saldo_medio*1.05);
	}
	else if(saldo_medio > 500.0)
	{
		printf("Saldo médio: %.2f, Crédito: %.2f\n", saldo_medio, saldo_medio*1.3);
	}
	else
	{
		printf("Saldo médio: %.2f, Crédito: %.2f\n", saldo_medio, saldo_medio*1.1);
	}
}