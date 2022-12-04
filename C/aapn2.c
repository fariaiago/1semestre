#include <stdio.h>

//Tipos de produtos disponíveis
enum produtos {AC3 , AC2 , REJUNTE};

//Destinos de entrega
enum locais {PALMAS, PORTO_NACIONAL};

//Struct para representar um pedido
typedef struct pedido
{
	enum produtos tipo;
	enum locais destino;
	int quantidade;
} pedido;

int main(void)
{
	//Ler CSV e transforma-lo em matrix
	pedido pedidos[2][10] = ler_dados();
	do
	{
		int tipo_relatorio = 0;
		printf("Qual tipo de relatório deseja fazer?\n\"0\" para por pedido, \"1\" para por cliente e \"2\" para geral.\n");
		scanf(" %d", &tipo_relatorio);
		switch(tipo_relatorio)
		{
			case 0:
				int cliente = 0, pedido = 0;
				printf("Digite o número do cliente e do pedido, respectivamente: ");
				scanf(" %d %d", &cliente, &pedido);
				break;
			case 0:
				break;
			case 0:
				break;
			default:
				printf("Erro, valor inválido.\n");
				break;
		}
	}
	while(1); //Fazer outro caso o usuário quiser
	return 0;
}

pedido *ler_dados(char *arquivo)
{
	FILE *csv = fopen(arquivo, 'r');
}