#include <stdio.h>

int main(void)
{
	printf("T");
	tab5_for();
	return 0;
}

void tab5_for()
{
	for(int i = 0; i <= 10; i++)
	{
		printf("5 x %i = %i\n", i, i*5);
	}
}