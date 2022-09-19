#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		return 1;
	}

	float n1 = atof(argv[1]);
	printf("R$%.2f\n", n1 * 0.9);
	return 0;
}