#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++)
	{
		float sld_md = atof(argv[i]);
		printf("Valor médio: R$%.2f. ", sld_md);
		if(sld_md <= 500)
		{
			printf("Valor do crédito: R$%.2f.\n", sld_md*0);
		}
		else if(sld_md <= 1000)
		{
			printf("Valor do crédito: R$%.2f.\n", sld_md*0.3);
		}
		else if(sld_md <= 3000)
		{
			printf("Valor do crédito: R$%.2f.\n", sld_md*0.4);
		}
		else
		{
			printf("Valor do crédito: R$%.2f.\n", sld_md*0.5);
		}
	}
}