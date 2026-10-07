#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	int p1, p2, p3, p4;

	double media;




	printf("Primeiro numero: ");

	scanf("%d", &p1);

	printf("Segundo numero: ");

	scanf("%d", &p2);

	printf("Terceiro numero: ");

	scanf("%d", &p3);

	printf("Quarto numero: ");

	scanf("%d", &p4);



	media = (p1 + p2 + p3 + p4) / 4.0;

	printf("Media: %.2f\n", media);

	return 0;


}




