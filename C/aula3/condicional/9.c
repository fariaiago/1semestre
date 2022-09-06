#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Uso: ./9 <área> <Região> <Se o lote é de esquina>\n"
			"Regiões: \"0\" para Norte, \"1\" para Sul\n"
			"De esquina: \"0\" para não, \"1\" para sim\n");
		return 1;
	}
	int area = atoi(argv[1]), rg = atoi(argv[2]), esq = atoi(argv[3]);
	float prç = 0;
	if(rg)
		prç = area*150;
	else
		prç = area*100;

	if(esq)
		prç += 600;
	if(area > 400)
		prç = prç * 1.25;
	return;
}