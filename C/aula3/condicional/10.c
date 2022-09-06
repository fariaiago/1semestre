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
	float vlor =  0;
	int area = atoi(argv[1]), n_cmds = atoi(argv[2]), deco = atoi(argv[3]), strut = atoi(argv[4]);
	if(deco || strut)
		vlor = area * 30;
	else
		vlor = area * 20;

	if(deco)
		vlor += n_cmds * 600;
	return 0;
}