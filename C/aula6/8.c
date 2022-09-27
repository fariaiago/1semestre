#include <stdio.h>

int main(void)
{
	float md_temp = 0, n_temp = 0;
	while(n_temp < 12)
	{
		float temp = 0;
		printf("Temperatura: ");
		scanf(" %d", &temp);
		if(temp <= -100)break;
		md_temp += temp;
		n_temp++;
	}

	for(int i = 0; i < 12; i++)
	return 0;
}