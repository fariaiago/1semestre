#include <stdio.h>

int passou(int);

int main()
{
	for(int i = 0; i < 10; i++)
	{
		if(passou(i + 1))
		{
			printf("Aluno n°%i passou\n", i + 1);
		}
		else
		{
			printf("Aluno n°%i não passou\n", i + 1);
		}
	}
}

int passou(int n)
{
	float n1 = 0, n2 = 0;
	printf("Nota n1 e n2 do %i° aluno: ", n);
	scanf(" %f %f", &n1, &n2);
	if((n1 + n2) / 2 >= 7)
		return 1;

	return 0;
}