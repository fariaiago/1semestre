#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("Uso: ./6 <Preco antigo> <do> <produto> <...>\n");
		return 1;
	}
	for(int i = 1; i < argc; i++)
	{
		float prç = atof(argv[i]);
	}
}