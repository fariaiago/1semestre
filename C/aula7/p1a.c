#include <stdio.h>

typedef struct atleta
{
	int idade;
	float oxi_sang[9];
	float freq_card[8];
} atleta;

atleta criar_atleta();

int main(void)
{
	atleta atletas[10];
	for(int i = 0; i < 10; i++)
		atletas[i] = criar_atleta();
}

atleta criar_atleta()
{
	atleta a;
	
}