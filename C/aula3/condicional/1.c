#include <stdio.h>

typedef struct pessoa
{
	char *nome;
	int idade;
	float peso;
} pessoa;

pessoa *crr_pss(char*);

int main(void)
{
	pessoa *p1 = crr_pss("primeira");
	return 0;
}

pessoa *crr_pss(char *n_pssoa)
{

	pessoa *p = NULL;
	//p->nome = NULL;
	p->idade = 10;
	printf("%i %p", p->idade, &(p->idade));
	//printf("Nome da %s pessoa: ", n_pssoa);
	//scanf("%s %d", p.nome, &(p.idade));
	return p;
}