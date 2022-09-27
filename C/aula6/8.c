#include <stdio.h>

int main(void)
{
	float md_temp = 0, n_temp = 0, i_pluvio = 0;

	while(n_temp < 12)
	{
		float temp = 0;
		printf("Escreva uma medição de temperatura: ");
		scanf(" %f", &temp);
		if(temp <= -100)break;
		md_temp += temp;
		n_temp++;
	}

	for(int i = 0; i < 12; i++)
	{
		float pluv = 0;
		printf("Escreva um indice pluviométrico: ");
		scanf(" %f", &pluv);
		if(pluv > i_pluvio)i_pluvio = pluv;
	}

	printf("Média de temperaturas: %f,maior indice pluviométrico: %f", md_temp/n_temp, i_pluvio);
	return 0;
}