#include <stdio.h>

float md(int);

int main()
{
	int n_pssou = 0;
	float md_trma = 0, mr_nta = 0;
	for(int i = 0; i < 10; i++)
	{
		float md_alno = md(i + 1);
		md_trma += md_alno;
		if(md_alno >= 7)
		{
			n_pssou++;
		}
		mr_nta = md_alno > mr_nta ? md_alno : mr_nta;
		printf("Aluno n°%i%s passou, %i passaram direto, maior nota é %.2f e a média atual da turma é %.2f\n",
			i + 1, md_alno >= 7 ? "" : " não", n_pssou, mr_nta, md_trma/(i+1));
	}
}

float md(int n)
{
	float n1 = 0, n2 = 0;
	printf("Nota n1 e n2 do %i° aluno: ", n);
	scanf(" %f %f", &n1, &n2);
	return (n1 + n2) / 2;
}