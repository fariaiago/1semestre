#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso correto: ./4 <tipo de operação> <1° número> <2° número>\n
			Tipos de operação válidos: soma(0), subtrair 1° por 2°(1), dividir 1° por 2°(2).\n");
		return 1;
	}

	int tipo = atoi(argv[1]);
	int n1 = atof(argv[2]), n2 = atof(argv[3]);

	switch(tipo)
	{
		case 0:
			printf("Resultado: %f", n1 + n2);
			break;
		case 1:
			printf("Resultado: %f", n1 - n2);
			break;
		case 2:
			printf("Resultado: %f", n1 / n2);
			break;
		default:
			printf("Erro:Operação inválida.\nTipos de operação válidos: soma(0), subtrair 1° por 2°(1), dividir 1° por 2°(2).\n");
			return 2;
	}

	return 0;
}