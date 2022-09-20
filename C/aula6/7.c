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
		float n_alnos = 0, n_ausc = 0;
		char *turma = argv[i];
		int cnt = -1;
		while(turma[++cnt])
		{
			n_ausc += turma[cnt] == 'A' || turma[cnt] == 'a' ? 1 : 0;
			n_alnos++;
		}
		if((n_ausc/n_alnos)*100.0 > 5)
			printf("Turma %d° teve ausencia superior a 5%%(%f%%)\n", i, (n_ausc/n_alnos)*100.0);
	}
	return 0;
}