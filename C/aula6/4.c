#include <stdio.h>
#include <string.h>

typedef struct pessoa
{
	char nome[16];
	int idade;
	float peso;
} pessoa;

pessoa crr_pss(int);

int main(void)
{
	pessoa pssoas[10];
	int mr_idd = 0;
	float md_ps = 0, md_idd = 0;
	char mr_nm[16];
	for(int i = 1; i <= 3; i++)
	{
		pssoas[i-1] = crr_pss(i);
		md_idd += pssoas[i-1].idade;
		md_ps += pssoas[i-1].peso;
		if(mr_idd < pssoas[i-1].idade)
		{
			mr_idd = pssoas[i-1].idade;
			strcpy(mr_nm, pssoas[i-1].nome);
		}
		printf("%s tem a maior idade: %i anos\n", mr_nm, mr_idd);
		printf("Médias: %f anos, %fkg\n", md_idd/i, md_ps/i);
	}

	return 0;
}

pessoa crr_pss(int n_pssoa)
{

	pessoa p;
	printf("Nome, idade e peso da %i° pessoa(respectivamente, separado por espaço): ", n_pssoa);
	scanf(" %s %d %f", p.nome, &(p.idade), &(p.peso));
	return p;
}