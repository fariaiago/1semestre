#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int soma = 0, nv_cmpra = 0, cntnuar = 0;
	do
	{
		do
		{
			char *txt;
			//int num = 0;
			printf("Número? ");
			scanf(" %s", txt);
			if(txt == "fim" || txt == "FIM")
				break;
			else
				soma += atoi(txt);
			//printf("Continuar? (\"0\" para não, \"1\" sim) ");
			//scanf(" %c", &cntnuar);
		}
		while(cntnuar);
		printf("Valor da compra: %i\n", soma);
		printf("Nova compra? (\"0\" para não, \"1\" sim) ");
		scanf(" %c", &nv_cmpra);
	}
	while(nv_cmpra);

	return 0;
}