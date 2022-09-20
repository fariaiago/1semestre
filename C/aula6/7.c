#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("Uso: ./7 <Presença> <dos> <alunos> <...>\n");
		return 1;
	}
	int n_prsnç = 0;
	for(int i = 1; i < argc; i++)
	{
		char *turma = argv[i];
		n_prsnç += prsnç == 'P' || prsnç == 'p' ? 1 : 0;
	}
 	printf("Presença: %f%%.\n", (1.0*n_prsnç)/(1.0*argc)*100.0);
	return 0;
}