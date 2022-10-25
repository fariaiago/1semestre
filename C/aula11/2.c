#include <stdio.h>

int main(void)
{
	float notas[3][30]
	= {{4.8,3.2,6.2,3.1,7.1,3.8,7.1,9.0,2.4,0.4,8.4,8.6,9.4,4.7,8.9,5.8,4.3,3.2,.7,6.1,7.2,2.7,5.4,5.3,9.5,1.2,.6,.3,9.9,2.2},
{5.1,6.1,1.0,2.1,2.4,4.4,7.3,1.7,1.3,7.9,5.4,5.2,7.5,7.9,2.0,7.0,.4,6.8,9.8,5.0,8.8,1.9,9.7,1.7,2.9,1.1,5.6,6.1,7.4,5.9},
{9.2,3.2,4.7,.1,6.7,7.8,2.3,8.0,8.7,4.0,2.3,1.5,8.2,8.4,4.0,3.9,3.2,5.1,5.4,6.0,7.9,3.2,4.6,2.2,2.9,2.5,9.8,3.1,9.3,1.6}};
	/*for(int i = 0; i < 3: i++)
	{
		for(int j = 0; j < 30; j++)
		{
			printf("Nota do %d° aluno da %d° turma: ", j+1, i+1);
			scanf(" %d", &(notas[i][j]));
		}
	}*/
	for(int i = 0; i < 3; i++)
	{
		printf("-- Boletim de notas - Turma %d --\n", i+1);
		float md_turma = 0.0f;
		for(int j = 0; j < 30; j++)
		{
			printf("Aluno %d: %.1f ", j+1, notas[i][j]);
			if((j+1) % 10 == 0)printf("\n");
			md_turma += notas[i][j];
		}
		md_turma = md_turma/30.0f;
		printf("Média da turma: %f\n", md_turma);
	}
	return 0;
}