#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso: ./10 <Área> <Número de cômodos> <Projeto de decoração> <Projeto estrutural>\n"
			"Projeto de decoração: \"0\" para não, \"1\" para sim\n"
			"Projeto estrutural: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
}