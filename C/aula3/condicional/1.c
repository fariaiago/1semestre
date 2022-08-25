#include <stdio.h>

typedef struct pessoa
{
	char *nome;
	int idade;
	float peso;
} pessoa;

pessoa crr_pss();

int main(void)
{
	pessoa p1 = crr_pss();
	return 0;
}

pessoa crr_pss()
{
	pessoa p;
	printf("Nome, idade, peso(nessa ordem): ");
	scanf("%s %d %f", p.nome, &(p.idade), &(p.peso));
	return p;
}