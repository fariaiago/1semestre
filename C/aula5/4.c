#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Uso: ./4 <Preço> <dos> <itens> <comprados> <...>\n");
		return 1;
	}
	float soma = 0;
	for(int i = 1; i < argc; i++)
	{
		soma += atof(argv[i]);
	}
	printf("Valor: %.2f\n", soma);
	
	return 0;
}