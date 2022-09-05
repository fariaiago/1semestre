#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso: ./6 <sexo> <glicemia> <HDL> (em mg/dl)\n");
		return 1;
	}

	int sxo = atoi(argv[1]), glcmia = atoi(argv[2]), hdl = atoi(argv[3]);
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