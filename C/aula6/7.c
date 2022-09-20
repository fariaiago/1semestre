#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("Uso: ./7 <Presença> <de uma> <turma> <...>\n");
		return 1;
	}

	for(int i = 1; i < argc; i++)
	{
		int n_prsnç = 0,;
		char *turma = argv[i];
		int cnt = -1;
		while(turma[cnt++])
		{
			n_prsnç += turma[cnt] == 'P' || turma[cnt] == 'p' ? 1 : 0;
		}
		printf("Turma %d° tem presença ");
	}
 	printf("Presença: %f%%.\n", (1.0*n_prsnç)/(1.0*argc)*100.0);
	return 0;
}