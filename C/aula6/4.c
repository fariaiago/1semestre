#include <stdio.h>

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
		md_idd += pssoas[i].idade;
		md_ps += pssoas[i].peso;
		if(mr_idd > pssoas[i].idade)
		{
			mr_idd = pssoas[i].idade;
			mr_nm = &(pssoas[i].nome);
		}
		printf("Médias: %f anos, %fkg\n", md_idd/i, md_ps/i);
	}
	do
	{
		printf("Continuar? \"0\" não, \"1\" sim: ");
		scanf(" %d", &exec);
	}
	while(exec);
	pessoa p1 = crr_pss("primeira");
	pessoa p2 = crr_pss("segunda");
	pessoa p3 = crr_pss("terceira");

	printf("Nomes: %s, %s, %s\n", p1.nome, p2.nome, p3.nome);

	return 0;
}

pessoa crr_pss(int n_pssoa)
{

	pessoa p;
	printf("Nome, idade e peso da %i° pessoa(respectivamente, separado por espaço): ", n_pssoa);
	scanf(" %s %d %f", p.nome, &(p.idade), &(p.peso));
	return p;
}