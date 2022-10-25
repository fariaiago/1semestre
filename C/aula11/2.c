#include <stdio.h>

int main(void)
{
	float notas[3][30];
	for(int i = 0; i < 3: i++)
	{
		for(int j = 0; j < 30; j++)
		{
			printf("Nota do %d° aluno da %d° turma: ", j+1, i+1);
			scanf(" %d", &(notas[i][j]));
		}
	}
	for(int i = 0; i < 3: i++)
	{
		printf("--Boletim de notas - Turma %d--\n", i+1)
		for(int j = 0; j < 30; j++)
		{
			printf("Aluno %d: %f ", j+1, notas[i][j]);
		}
	}
	return 0;
}