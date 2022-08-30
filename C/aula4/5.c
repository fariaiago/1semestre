#include <stdio.h>

int main()
{
	for(int i = 1; i < 10; i++)
	{
		if(passou(i + 1))
		{
			printf("Aluno");
		}
	}
}

int passou(int n)
{
	int n1 = 0, n2 = 0;
	printf("Nota n1 e n2 do %i° aluno", n);
	if((n1 + n2) / 2 >= 7)
		return 0;

	return 1;
}