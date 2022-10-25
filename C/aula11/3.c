#include <stdio.h>

int main(void)
{
	int idades[10];
	int freq[10][8]
	= {{66, 87, 44, 41, 53, 7, 74, 61, 62, 63},
{79, 62, 32, 92, 70, 93, 77, 63, 16, 94},
{32, 11, 46, 99, 70, 99, 55, 2, 75, 29},
{53, 97, 66, 45, 20, 35, 100, 58, 6, 91},
{22, 62, 3, 34, 16, 81, 88, 17, 37, 78},
{12, 82, 17, 85, 8, 9, 65, 99, 69, 8},
{40, 61, 73, 93, 17, 100, 54, 19, 2, 13},
{37, 13, 48, 30, 8, 76, 91, 85, 8, 79}};
	float sang[10][8]
	= {{66, 87, 44, 41, 53, 7, 74, 61, 62, 63},
{79, 62, 32, 92, 70, 93, 77, 63, 16, 94},
{32, 11, 46, 99, 70, 99, 55, 2, 75, 29},
{53, 97, 66, 45, 20, 35, 100, 58, 6, 91},
{22, 62, 3, 34, 16, 81, 88, 17, 37, 78},
{12, 82, 17, 85, 8, 9, 65, 99, 69, 8},
{40, 61, 73, 93, 17, 100, 54, 19, 2, 13},
{37, 13, 48, 30, 8, 76, 91, 85, 8, 79}};
	/*for(int i = 0; i < 10; i++)
	{
		printf("Idade do %d° atleta", i+1);
		scanf(" %d", &(idades[i]));
		for(int j = 0; j < 8; j++)
		{
			printf("Frequência cardiaca e nível de O2 no sangue do %d° atleta na %d° semana:", i+1, j+1);
			scanf(" %d %f", &(freq[i][j]), &(sang[i][j]));
		}
	}*/
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