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
	p.nome = "Aaaaaaa";
	p.idade = 10;
	printf("%i %p\n", p.idade, &(p.idade));

	char *nm = NULL;
	printf("Nome da %s pessoa: ", n_pssoa);
	scanf(" %s ", nm);
	return p;
}