#include <stdio.h>
#include <locale.h>
int main(void)

{
	int num, somador = 0, i = 0;
	float media;

	do
	{
		printf("Diz um numero");
		scanf("%i", &num);
		somador = somador + num;
		i++;
	}

	while (somador < 1000);

	media = somador / i;

	printf("A media dos numeros eh: %.2f", media);

	return 0;

}