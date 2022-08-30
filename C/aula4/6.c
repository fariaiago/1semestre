#include <stdio.h>

int md(int);

int main()
{
	float md_trma = 0, mr_nta = 0;
	for(int i = 0; i < 2; i++)
	{
		int n_pssou = 0;
		float md_alno = md(i + 1);
		if(md_alno >= 7)
		{
			n_pssou++;
			mr_nta = md_alno > mr_nta ? md_alno : mr_nta;
		}
		printf("Aluno n°%i%s passou, %i passram direto e maior nota é %f\n", i + 1, md_alno >= 7 ? "" : " não", n_pssou, );
	}
}

float md(int n)
{
	float n1 = 0, n2 = 0;
	printf("Nota n1 e n2 do %i° aluno: ", n);
	scanf(" %f %f", &n1, &n2);
	return (n1 + n2) / 2;
}