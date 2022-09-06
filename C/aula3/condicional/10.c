#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 6)
	{
		printf("Uso: ./10 <Área> <Número de cômodos> <Projeto de decoração> <Projeto estrutural> <Comprado pela internet>\n"
			"Projeto de decoração: \"0\" para não, \"1\" para sim\n"
			"Projeto estrutural: \"0\" para não, \"1\" para sim\n"
			"Comprado pela internet: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
	float vlor =  0;
	int area = atoi(argv[1]), n_cmds = atoi(argv[2]), deco = atoi(argv[3]), strut = atoi(argv[4]), net = atoi(argv[5]);
	if(deco || strut)
		vlor = area * 30;
	else
		vlor = area * 20;
	if(deco)
		vlor += n_cmds * 100;
	if(strut)
		vlor += 1200;
	if(net)
		vlor = vlor * 0.95;

	printf("Valor: R$%.2f\n", vlor);
	return 0;
}