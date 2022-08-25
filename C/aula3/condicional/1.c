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
	char *nm;
	int idd;
	float peso;
	printf("Nome da %s pessoa: ", n_pssoa);
	scanf("%s", nm);
	printf("Idade da %s pessoa: ", n_pssoa);
	scanf("%d", &idd);
	printf("Peso da %s pessoa: ", n_pssoa);
	scanf("%f", &peso);
	pessoa p;
	return p;
}