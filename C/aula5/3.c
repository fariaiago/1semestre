#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int soma = 0, num = 0;
	for(int i = 1; i < argc; i++)
	{
		if(i % 2 == 0)
		{
			char op = argv[i];
			if(argv[i] == '+')
				soma += num;
			else
				break
		}
		else
		{
			num = atoi(argv[i]);
		}
	}
}