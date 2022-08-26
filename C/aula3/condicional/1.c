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
	pessoa p1 = crr_pss("primeira");
	pessoa p2 = crr_pss("segunda");
	pessoa p3 = crr_pss("terceira");
	return 0;
}

pessoa crr_pss(char *n_pssoa)
{

	pessoa p;
	printf("Nome, idade e peso da %s pessoa(respectivamente e separado por espaço): ", n_pssoa);
	scanf(" %s %d", p.nome, &(p.idade));
	return p;
}