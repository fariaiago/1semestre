#include <stdio.h>

typedef struct pessoa
{
	char *nome;
	int idade;
	float peso;
} pessoa;

pessoa crr_pss(char*);

int main(void)
{
	pessoa p1 = crr_pss("primeira");
	return 0;
}

pessoa crr_pss(char *n_pssoa)
{

	pessoa p;
	p.nome = NULL;
	printf("Nome da %s pessoa: ", n_pssoa);
	scanf("%s %d", p.nome, &(p.idade));
	getchar();
	printf("Idade da %s pessoa: ", n_pssoa);
	scanf(" %d", &(p.idade));
	getchar();
	printf("Peso da %s pessoa: ", n_pssoa);
	scanf("%f", &(p.peso));
	return p;
}