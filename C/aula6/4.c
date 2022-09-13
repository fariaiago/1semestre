#include <stdio.h>

typedef struct pessoa
{
	char nome[16];
	int idade;
	float peso;
} pessoa;

pessoa crr_pss(char*);

int main(void)
{
	int n_pssoa = 0, exec = 0;
	float md_ps = 0, md_idd = 0;
	do
	{
		printf("Continuar? \"0\" não, \"1\" sim: ");
		scanf(" %d", &exec);
		n_pessoa++;
	}
	while(exec);
	pessoa p1 = crr_pss("primeira");
	pessoa p2 = crr_pss("segunda");
	pessoa p3 = crr_pss("terceira");

	printf("Nomes: %s, %s, %s\n", p1.nome, p2.nome, p3.nome);
	printf("Médias: %f anos, %fkg\n", (p1.idade + p2.idade + p3.idade)*1.0f/3.0f);

	float md_ps = (p1.peso+p2.peso+p3.peso)*1.0f/3.0f;
	if(md_ps > 55)
	{
		printf("Média peso > 55\n");
	}
	else
	{
		printf("Média peso < 55\n");
	}
	return 0;
}

pessoa crr_pss(char *n_pssoa)
{

	pessoa p;
	printf("Nome, idade e peso da %s pessoa(respectivamente e separado por espaço): ", n_pssoa);
	scanf(" %s %d %f", p.nome, &(p.idade), &(p.peso));
	return p;
}