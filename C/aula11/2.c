#include <stdio.h>

int main(void)
{
	float notas[3][30]
	= 48,32,62,31,71,38,71,90,24,4,84,86,94,47,89	58	43	32	7	61	72	27	54	53	95	12	6	3	99	22
51	61	10	21	24	44	73	17	13	79	54	52	75	79	20	70	4	68	98	50	88	19	97	17	29	11	56	61	74	59
92	32	47	1	67	78	23	80	87	40	23	15	82	84	40	39	32	51	54	60	79	32	46	22	29	25	98	31	93	16;
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