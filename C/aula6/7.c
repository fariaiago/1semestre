#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("Uso: ./6 <Presença> <dos> <alunos> <...>\n");
		return 1;
	}
	int n_prsnç = 0;
	for(int i = 1; i < argc; i++)
	{
		char prsnç = argv[i];
		n_prsnç += prsnç == 'P' || prsnç == 'p' ? 1 : 0;
 		printf("Produto %i° custava R$%.2f e passará a custar R$%.2f, agora classificado como %s.\n", i, prç, nv, clsse(nv));
	}
	return 0;
}