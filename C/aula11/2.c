#include <stdio.h>

int main(void)
{
	float notas[3][30];
	float mr_md = 0.0f;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 30; j++)
		{
			printf("Nota do %d° aluno da %d° turma: ", j+1, i+1);
			scanf(" %f", &(notas[i][j]));
		}
	}
	for(int i = 0; i < 3; i++)
	{
		printf("-- Boletim de notas - Turma %d --\n", i+1);
		float md_turma = 0.0f;
		for(int j = 0; j < 30; j++)
		{
			printf("Aluno %d: %.1f	", j+1, notas[i][j]);
			if((j+1) % 10 == 0)printf("\n");
			md_turma += notas[i][j];
		}
		md_turma = md_turma/30.0f;
		printf("Média da turma: %f\nAlunos acima da média:", md_turma);
		for(int j = 0; j < 30; j++)
		{
			if(notas[i][j] > md_turma)printf(" Aluno %d,", j+1);
		}
		printf("\n");
		if(md_turma > mr_md)mr_md = md_turma;
	}
	printf("-- Maior média de turma: %f --\n", mr_md);
	return 0;
}