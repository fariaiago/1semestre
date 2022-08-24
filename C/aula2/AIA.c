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
	printf("%i\n", atoi(argv[2]) + atoi(argv[3]));
}

void md2(char *argv[])
{
	float n1 = atof(argv[2]);
	float n2 = atof(argv[3]);
	printf("%f\n", (n1 + n2)/2.0);
}

void md3mr5(char *argv[])
{
	float n1 = atof(argv[2]);
	float n2 = atof(argv[3]);
	float n3 = atof(argv[4]);
	float md = (n1+n2+n3)/3.0f;
	if(md > 5)
	{
		printf("> 5\n");
	}
	else
	{
		printf("!> 5\n");
	}
}

void antsuc(char *argv[])
{
	int n1 = atoi(argv[2]);
	printf("ant: %i, suc: %i\n", n1-1, n1+1);
}

void terc(char *argv[])
{
	printf("terc: %f\n", atof(argv[2])/3.0f);
}

void div(char *argv[])
{
	int n1 = atoi(argv[2]);
	int n2 = atoi(argv[3]);
	printf("%i / %i = %f\n", n1, n2, n1/n2*1.0f);
}

void nome(char *argv[])
{
	char *n;
	printf("Nome: ");
	scanf("%d", &n);
	printf("Olá %s\n", n);
}

void entr(char *argv[])
{
	int n = atoi(argv[2]);
	if(20 =< n && n =< 90)
	{
		printf("20 < x < 90\n");
	}
	else
	{
		printf("! 20 < x < 90\n");
	}
}