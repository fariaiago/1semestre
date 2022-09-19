#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		return 1;
	}

	float n1 = atof(argv[1]), n2 = atof(argv[2]), n3 = atof(argv[3]);
	printf("Produto: %f\n", n1 * n2 * n3);
	return 0;
}