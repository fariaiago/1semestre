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

pedido (*ler_dados(pedido [][10],char*))[10];
int calc_frete(int, int, int);
char *tipos_para_texto(int);
char *locais_para_texto(int);

int main(void)
{
	//Ler CSV e transforma-lo em matrix
	pedido pedidos[2][10];
	ler_dados(pedidos, "pedidos.csv");
	do
	{
		int tipo_relatorio = 0;
		printf("Qual tipo de relatório deseja fazer?\n\"0\" para por pedido, \"1\" para por cliente e \"2\" para geral.\n");
		scanf(" %d", &tipo_relatorio);
		switch(tipo_relatorio)
		{
			case 0:
				{
					int cliente = 0, n_pedido = 0;
					printf("Digite o número do cliente e do pedido, respectivamente: ");
					scanf(" %d %d", &cliente, &n_pedido);
					pedido pd = pedidos[cliente][n_pedido];
					printf("Relatório de pedido #%d-%d\nTipo de produto: %s\nQuantidade: %d\nDestino: %s\nFrete: R$%d\n",
						cliente, n_pedido, tipos_para_texto(pd.tipo), pd.quantidade, locais_para_texto(pd.destino), calc_frete(pd.destino, pd.tipo, pd.quantidade));
					break;
				}
			case 1:
				{
					int cliente = 0;
					printf("Digite o número do cliente e do pedido, respectivamente: ");
					scanf(" %d", &cliente);
					pedido pd = pedidos[cliente][0];
					printf("Relatório de cliente #%d\nTipo de produto: %s\nQuantidade: %d\nDestino: %s\nFrete: R$%d\n",
						cliente, tipos_para_texto(pd.tipo), pd.quantidade, locais_para_texto(pd.destino), calc_frete(pd.destino, pd.tipo, pd.quantidade));
					break;
				}
			case 2:
				break;
			default:
				printf("Erro, valor inválido.\n");
				break;
		}
	}
	while(0); //Fazer outro caso o usuário quiser
	return 0;
}

pedido (*ler_dados(pedido pedidos[][10], char *arquivo))[10]
{
	FILE *csv = fopen(arquivo, 'r');
	char buffer[128];
	while(fgets(buffer, 256, csv))
	{
		int cliente = 0, tipo = 0, local = 0, quantidade = 0;
		sscanf();
	}
	pedido pd;
	pd.tipo = AC3;
	pd.destino = PALMAS;
	pd.quantidade = 100;
	pedidos[0][0] = pd;
	return pedidos;
}

int calc_frete(int destino, int tipo, int quantidade)
{
	int peso = (tipo != 2 ? 20 : 5)*quantidade;
	if(peso <= 1000)
	{
		return 0;
	}
	else if(peso <= 2000)
	{
		return 100 + 100 * destino;
	}
	else
	{
		return 2 * quantidade;
	}
}

char *tipos_para_texto(int tipo)
{
	switch(tipo)
	{
		case 0:
			return "AC3";
		case 1:
			return "AC2";
		case 2:
			return "Rejunte";
		default:
			return "Produto inválido";
	}
}

char *locais_para_texto(int destino)
{
	switch(destino)
	{
		case 0:
			return "Palmas";
		case 1:
			return "Porto Nacional";
		default:
			return "Local inválido";
	}
}