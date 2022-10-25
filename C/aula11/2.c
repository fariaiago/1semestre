#include <stdio.h>

int main(void)
{
	float notas[3][30]
		= {{50, 11, 100, 29, 70, 2, 62, 99, 84, 13, 78, 96, 5, 51, 56, 1, 99, -1},
		{51, 18, 74, 83, 35, 75, 98, 49, 21, 57, 90, 62, 11, 64, 54, 6, 97, 93, 19, 50, 4, 1, 78, 91, -1},
		{80, 96, 40, 48, 90, 88, 36, 25, 72, 23, 52, 47, 84, 64, 76, 39, 90, 69, 67, 78, 89, 63, 36, 11, 60, 60, 28, 79, -1}};
	float mr_md = 0.0f;
	/*for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 30; j++)
		{
			printf("Nota do %d° aluno da %d° turma: ", j+1, i+1);
			scanf(" %f", &(notas[i][j]));
			if(notas[i][j] == -1)break;
		}
	}*/
	for(int i = 0; i < 3; i++)
	{
		int n_alunos = 30;
		float md_turma = 0.0f;
		printf("-- Boletim de notas - Turma %d --\n", i+1);
		for(int j = 0; j < 30; j++)
		{
			if(notas[i][j] == -1)
			{
				n_alunos = j+1;
				break;
			}
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