#include <stdio.h>
#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");

	int num;

	do
	{
		printf("Diz um número\n");
		scanf("%i", &num);

		if (num % 2 == 0 && num != 0)

		{
			printf("O número é par\n");
		}

		if (num % 2 != 0)
		{
			printf("O número é ímpar\n");
		}
	} while (num != 0);

	printf("Digitou 0 - vai sair do programa");

	return 0;

}