#include <stdio.h>

int ler_int(char*);

int main(void)
{
	float prço = 200.0;
	int rqr_mtrl =ler_int("O aluno requer material? (\"0\" para não e \"1\" para sim): ");
	int n_irms = ler_int("Quantos irmãos o aluno possui já matriculado?: ");
	int vnceu = ler_int("O valor foi pago antes do vencimento? (\"0\" para não e \"1\" para sim): ");

	if(rqr_mtrl)
	return 0;
}

int ler_int(char *txto)
{
	int n = 0;
	printf(txto);
	scanf("%d" &n);

	return n;
}