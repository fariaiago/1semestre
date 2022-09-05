#include <stdio.h>
#include <stdlib.h>

void imprmr_dstno(char *, int);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Uso: ./7 <código de região>\n");
		return 1;
	}

	int rgiao = atoi(argv[1]);
	switch(rgiao)
	{
		case 1:
			imprmr_dstno("Sul", 10);
			break;
		case 2:
			imprmr_dstno("Norte", 5);
			break;
		case 3 ... 4:
			imprmr_dstno("Leste", 8);
			break;
		case 5 ... 10:
			imprmr_dstno("Oeste", 9);
			break;
		default:
			printf("Erro: Alíquota inválida.\n");
			break;

	}
	return 0;
}

void imprmr_dstno(char *dstno, int alqta)
{
	printf("O pacote irá para a região %s, cuja alíquota é %i%%.\n", dstno, alqta);
}