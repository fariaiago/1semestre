#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Uso: ./6 <glicemia> <HDL> (em mg/dl)\n");
		return 1;
	}

	int glcmia = atoi(argv[1]), hdl = atoi(argv[2]);
	if(glcmia < 110)
	{
		printf("	Glicemia normal\n");
	}
	else
	{
		printf("	Glicemia anormal\n");
	}

	if(hdl)
	{
		printf("	Glicemia normal\n");
	}
	else
	{
		printf("	Glicemia anormal\n");
	}

	return 0;
}