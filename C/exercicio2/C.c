#include <stdio.h>

int ler_int(char*);

int main(void)
{
	int rqr_mtral =ler_int("");
	int n_irms = 0;
	int venceu = ler_int("O boleto foi pago antes do vencimento? (\"0\" para não e \"1\" para sim)");
	return 0;
}

int ler_int(char *txto)
{
	int n = 0;
	printf(txto);
	scanf("%d" &n);

	return n;
}