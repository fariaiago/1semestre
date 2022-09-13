#include <stdio.h>
#include <stdlib.h>

float nv_prç(float);
char *clsse(float);

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
		float nv = nv_prç(prç);
		printf("Produto %i° custava R$%.2f e passará a custar R$%.2f, agora classificado como %s.\n", i, prç, nv, clsse(nv));
	}
	return 0;
}

float nv_prç(float prç)
{
	if(prç < 50)
		return prç*1.1;
	else if(prç > 500)
		return prç*1.3;
	else
		return prç*1.2;
}

char *clsse(float prç)
{
	if(prç < 80)
	{
		return "barato";
	}
	else if(prç > 800)
	{
		return "muito caro";
	}
	else if(prç >= 80 && prç <= 600)
	{
		return "normal";
	}
	else
	{
		return "caro";
	}
}