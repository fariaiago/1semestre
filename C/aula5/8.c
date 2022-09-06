#include <stdio.h>

void tab_for(int);
void tab_while(int);
void for_2a10();
void while_2a10();

int main(void)
{
	printf("Tabuada do 2 ao 10\n");
	while_2a10();
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

void for_2a10()
{
	for(int i = 2; i <= 10; i++)
	{
		tab_for(i);
	}
}

void while_2a10()
{
	int i = 2;
	while(i <= 10)
	{
		tab_while(i);
		i++;
	}
}