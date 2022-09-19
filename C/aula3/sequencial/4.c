#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		return 1;
	}

	float n1 = atof(argv[1]), n2 = atof(argv[2]);
	printf("Subtração: %f\n", n1 - n2);
	return 0;
}