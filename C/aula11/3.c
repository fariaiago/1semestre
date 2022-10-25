#include <stdio.h>

int main(void)
{
	int idades[10];
	int freq[10][8]
	= ,;
	float sang[10][8];
	for(int i = 0; i < 10; i++)
	{
		printf("Idade do %d° atleta", i+1);
		scanf(" %d", &(idades[i]));
		for(int j = 0; j < 8; j++)
		{
			printf("Frequência cardiaca e nível de O2 no sangue do %d° atleta na %d° semana:", i+1, j+1);
			scanf(" %d %f", &(freq[i][j]), &(sang[i][j]));
		}
	}
	for(int i = 0; i < 10; i++)
	{
		int mr_freq = 0;
		float md_sangue = 0.0f;
		printf("-- Relatório do Atleta %d --\nSemana Cardio Sangue\n", i+1);
		for(int j = 0; j < 8; j++)
		{
			printf("%d %d %f", j+1, freq[i][j], sang[i][j]);
			if(freq[i][j] > mr_freq)mr_freq = freq[i][j];
			md_sangue += sang[i][j];
		}
		md_sangue = md_sangue/8.0f;
		printf("Maior frequência cardiaca: %d\nMédia nivel de O2 no sangue: %f\n", mr_freq, md_sangue);
	}
	return 0;
}