#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Uso: ./9 <Região> <Se lote é de esquina>\n"
			"Regiões: \"0\" para Norte, \"1\" para Sul\n");
		return 1;
	}
	double saldo_medio = atof(argv[1]);
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