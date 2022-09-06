#include <stdio.h>

void tab_for();
void tab_while();

int main(void)
{
	printf("Tabuada do 2 ao 10\n");
	tab_while();
	return 0;
}

void tab_for()
{
	for(int i = 0; i <= 10; i++)
	{
		printf("5 x %i = %i\n", i, i*5);
	}
}

void tab_while()
{
	int i = 0;
	while(i <= 10)
	{
		printf("5 x %i = %i\n", i, i*5);
		i++;
	}
}

void for_2a10()
{
	for(int i = 2; i <= 10; i++)
	{
		a
	}
}