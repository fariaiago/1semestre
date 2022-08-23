#include <stdio.h>

void main(void) {
	int n1,n2,n3;
	float media;

	scanf("%d %d %d", &n1, &n2, &n3);
	media = (float)(n1+n2+n3)/3;
	printf("%.2f ", media);
	if(media > 5){
		printf("e maior que 5");
	}
	else{
		printf("nao e maior que 5");
	}
}