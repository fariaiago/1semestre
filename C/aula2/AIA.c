#include <stdio.h>
#include <stdlib.h>

void soma(char *argv[]);

int main(int argc, char *argv[])
{
	int modo = atoi(argv[1]);
	switch(modo)
	{
		case 0:
			soma(argv);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
	}
}

void soma(char *argv[])
{
	printf("%i", atoi(argv[2]) + atoi(argv[3]));
}

void media2(char *argv[])
{
	float n1 = atof(argv[2]);
	float n2 = atof(argv[3]);
	printf("%f", (n1 + n2)/2.0);
}

void media3(char *argv[])
{
	float n1 = atof(argv[2]);
	float n2 = atof(argv[3]);
	float n3 = atof(argv[4]);
	printf("%f", (n1 + n2)/2.0);
}