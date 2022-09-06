#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 5)
	{
		printf("Uso: ./10 <Preço das compras> <Região> <Dia de promoção> <Cliente VIP>\n"
			"Região: \"0\" para Sul/Sudeste, \"1\" para outras\n"
			"Dia de promoção: \"0\" para não, \"1\" para sim\n"
			"Cliente VIP: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
	float vlor = atof(argv[1]);
	int rg = atoi(argv[2]), promo = atoi(argv[3]), vip = atoi(argv[4]);
	if(!promo)
	{
		if(rg)
			vlor = vlor*1.1;
		else
			vlor = vlor*1.2;
	}
	if(vip)
		vlor = vlor - 100.0;
	printf("Valor: %.2f\n", vlor);
	return 0;
}