#include <stdio.h>

int main(void)
{
	float notas[3][30]
		= {{5.0, 1.1, 10.0, 2.9, 7.0, .2, 6.2, 9.9, 8.4, 1.3, 7.8, 9.6, .5, 5.1, 5.6, .1, 9.9, -1},
		{5.1, 1.8, 7.4, 8.3, 3.5, 7.5, 9.8, 4.9, 2.1, 5.7, 9.0, 6.2, 1.1, 6.4, 5.4, .6, 9.7, 9.3, 1.9, 5.0, .4, .1, 7.8, 9.1, -1},
		{8.0, 9.6, 4.0, 4.8, 9.0, 8.8, 3.6, 2.5, 7.2, 2.3, 5.2, 4.7, 8.4, 6.4, 7.6, 3.9, 9.0, 6.9, 6.7, 7.8, 8.9, 6.3, 3.6, 1.1, 6.0, 6.0, 2.8, 7.9, -1}};
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
		if(n_alunos % 10 != 0)printf("\n");
		md_turma = md_turma/n_alunos;
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