#include <stdio.h>
#include <stdlib.h>

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

void ler_dados(pedido [][10], int*, char*);
int calc_frete(int, int, int);
int calc_peso(int, int);
char *tipos_para_texto(int);
char *locais_para_texto(int);

int main(void)
{
	pedido pedidos[2][10];
	int n_pedidos[2];
	int repetir = 0;
	//Ler CSV e transforma-lo em matrix
	ler_dados(pedidos, n_pedidos, "pedidos.csv");
	do
	{
		//Questiona ao usuario qual tipo de relatório
		int tipo_relatorio = 0;
		printf("Qual tipo de relatório deseja fazer?\n\"0\" para por pedido, \"1\" para por cliente e \"2\" para geral.\n");
		scanf(" %d", &tipo_relatorio);
		switch(tipo_relatorio)
		{
			case 0:
				{
					int cliente = 0, n_pedido = 0;
					printf("Digite o número do cliente e do pedido separado por espaço, respectivamente: ");
					scanf(" %d %d", &cliente, &n_pedido);
					pedido pd = pedidos[cliente][n_pedido];
					printf("Relatório de pedido #%d-%d\nTipo de produto: %s\nQuantidade: %d\nDestino: %s\nFrete: R$%d\n",
						cliente, n_pedido, tipos_para_texto(pd.tipo), pd.quantidade, locais_para_texto(pd.destino),
						calc_frete(pd.destino, pd.tipo, pd.quantidade));
					break;
				}
			case 1:
				{
					int cliente = 0;
					float soma_peso = 0;
					printf("Digite o número do cliente: ");
					scanf(" %d", &cliente);
					for(int i = 0; i < n_pedidos[cliente]; i++)
					{
						soma_peso += calc_peso(pedidos[cliente][i].tipo, pedidos[cliente][i].quantidade);
					}
					printf("Relatório de cliente #%d\nNúmero de pedidos: %d\nMédia de peso dos pedidos: %f\n",
						cliente, n_pedidos[cliente], soma_peso/(1.0*n_pedidos[cliente]));
					break;
				}
			case 2:
				{
					int soma_peso = 0;
					printf("Relatório geral\n");
					printf("Pedidos abaixo de 1000kg: ");
					for(int i = 0; i < 2; i++)
					{
						for(int j = 0; j < n_pedidos[i]; j++)
						{
							int peso = calc_peso(pedidos[i][j].tipo, pedidos[i][j].quantidade);
							soma_peso += peso;
							if(peso < 1000)
								printf("%d-%d ", i, j);
						}
					}
					printf("\nPeso total das vendas: %d\n", soma_peso);
				}
				break;
			default:
				printf("Erro: tipo de relatório inválido.\n");
				break;
		}
		printf("Fazer outro relatório? \"0\" para não, \"1\" para sim: ");
		scanf(" %d", &repetir);
		printf("\n");
	}
	while(repetir); //Fazer outro relatorio caso o usuário quiser
	return 0;
}

void ler_dados(pedido pedidos[][10], int n_pedidos[], char *arquivo)
{
	FILE *csv = fopen(arquivo, "r");
	char buffer[128];
	fgets(buffer, 128, csv);
	while(fgets(buffer, 128, csv))
	{
		int cliente = 0, tipo = 0, destino = 0, quantidade = 0;
		sscanf(buffer, "%d,%d,%d,%d", &cliente, &tipo, &destino, &quantidade);
		pedido pd;
		pd.tipo = tipo;
		pd.destino = destino;
		pd.quantidade = quantidade;
		pedidos[cliente][n_pedidos[cliente]] = pd;
		n_pedidos[cliente]++;
	}
	fclose(csv);
}

int calc_frete(int destino, int tipo, int quantidade)
{
	int peso = calc_peso(tipo, quantidade);
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

int calc_peso(int tipo, int quantidade)
{
	return (tipo != 2 ? 20 : 5)*quantidade;
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