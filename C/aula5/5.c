#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int soma = 0, nv_cmpra = 0, cntnuar = 0;
	do
	{
		do
		{
			char txt[8];
			//int num = 0;
			printf("Número? ");
			scanf(" %s", txt);
			if(strcmp(txt, "fim") == 0 || strcmp(txt, "FIM") == 0)
				break;
			else
				soma += atoi(txt);
			//printf("Continuar? (\"0\" para não, \"1\" sim) ");
			//scanf(" %c", &cntnuar);
		}
		while(cntnuar);
		printf("Valor da compra: %i\n", soma);
		printf("Nova compra? (\"0\" para não, \"1\" sim) ");
		scanf(" %d", &nv_cmpra);
	}
	while(nv_cmpra);

	return 0;
}