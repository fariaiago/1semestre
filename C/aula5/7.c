#include <stdio.h>
#include <stdlib.h>

void tab_for(int);
void tab_while(int);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Uso: ./7 <Número>\n");
		return 1;
	}
	int n = atoi(argv[1]);
	printf("Tabuada do %i\n", n);
	tab_while(n);
	return 0;
}

void tab_for(int n)
{
	for(int i = 0; i <= 10; i++)
	{
		printf("%i x %i = %i\n", n, i, n*i);
	}
}

void tab_while(int n)
{
	int i = 0;
	while(i <= 10)
	{
		printf("%i x %i = %i\n", n, i, n*i);
		i++;
	}
}