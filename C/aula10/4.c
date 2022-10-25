#include <stdio.h>

int main(void)
{
	int num[13];
	int n_mnr_idd = 0, n_abaixo_md = 0;
	float md_idades = 0;
	for(int i = 0; i < 13; i++)
	{
		int n = 0;
		scanf( "%d", &n);
		num[i] = n;
		md_idades += num[i];
		if(num[i] < 18)n_mnr_idd++;
	}
	md_idades = md_idades/13.0f;
	for(int i = 0; i < 13; i++)
	{
		if(num[i] < md_idades)n_abaixo_md++;
	}
	printf("Média: %f\nAbaixo média: %d\nMenor de idade: %d\n", md_idades, n_abaixo_md, n_mnr_idd);
}