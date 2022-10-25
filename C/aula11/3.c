#include <stdio.h>

int main(void)
{
	int idades[10];
	int freq[10][8]
	= {{72, 83, 60, 67, 65, 2, 45, 90}, {63, 54, 25, 3, 29, 12, 6, 31}, {68, 7, 6, 45, 64, 85, 20, 9}, {3, 22, 65, 20, 90, 15, 31, 48},
	{65, 93, 7, 26, 30, 38, 57, 86}, {68, 32, 94, 21, 58, 36, 45, 77}, {43, 70, 78, 99, 43, 59, 78, 38}, {84, 73, 13, 25, 59, 46, 54, 46},
	{68, 36, 79, 81, 26, 87, 65, 37}, {13, 22, 91, 63, 36, 58, 25, 14}};
	float sang[10][8]
	= {{72, 83, 60, 67, 65, 2, 45, 90},
{63, 54, 25, 3, 29, 12, 6, 31},
{68, 7, 6, 45, 64, 85, 20, 9},
{3, 22, 65, 20, 90, 15, 31, 48},
{65, 93, 7, 26, 30, 38, 57, 86},
{68, 32, 94, 21, 58, 36, 45, 77},
{43, 70, 78, 99, 43, 59, 78, 38},
{84, 73, 13, 25, 59, 46, 54, 46},
{68, 36, 79, 81, 26, 87, 65, 37},
{13, 22, 91, 63, 36, 58, 25, 14}};
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
			printf("%d	%d	%.1f\n", j+1, freq[i][j], sang[i][j]);
			if(freq[i][j] > mr_freq)mr_freq = freq[i][j];
			md_sangue += sang[i][j];
		}
		md_sangue = md_sangue/8.0f;
		printf("Maior frequência cardiaca: %d\nMédia nivel de O2 no sangue: %f\n", mr_freq, md_sangue);
	}
	return 0;
}