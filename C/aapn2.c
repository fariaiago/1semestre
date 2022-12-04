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
		//Fazer relatórios
	}
	while(1); //Fazer outro caso o usuário quiser
	return 0;
}

pedido *ler_dados(char *arquivo)
{
	a
}