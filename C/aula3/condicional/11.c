#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 6)
	{
		printf("Uso: ./10 <Preço das compras> <Número de cômodos> <Projeto de decoração> <Projeto estrutural> <Comprado pela internet>\n"
			"Projeto de decoração: \"0\" para não, \"1\" para sim\n"
			"Projeto estrutural: \"0\" para não, \"1\" para sim\n"
			"Comprado pela internet: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
	return 0;
}