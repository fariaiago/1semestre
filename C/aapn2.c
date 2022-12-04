#include <stdio.h>

//Tipos de produtos disponíveis
enum produtos {AC3 , AC2 , REJUNTE}

//Struct para representar um pedido
typedef struct pedido
{
	enum produtos tipo;
	int quantidade;
} pedido;
int main(void)
{
	//Ler CSV e transforma-lo em matrix
	int var = ler_dados();
	do
	{
		//Fazer relatórios
	}
	while(1); //Fzer outro caso o usuário quiser
	return 0;
}