#include <stdio.h>

void tab5_for();
void tab5_while();

int main(void)
{
	printf("Tabuada do 5\n");
	tab5_while();
	return 0;
}

void tab5_for()
{
	for(int i = 0; i <= 10; i++)
	{
		printf("5 x %i = %i\n", i, i*5);
	}
}

void tab5_while()
{
	int i = 0;
	while(i <= 10)
	{
		printf("5 x %i = %i\n", i, i*5);
		i++;
	}
}