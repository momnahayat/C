#include <stdio.h>
#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");

	int num1, num2, num3;

	printf("Introduza o primeiro numero: ");
	scanf_s("%d", &num1);

	printf("Introduza o segundo numero: ");
	scanf_s("%d", &num2);

	printf("Introduza o terceiro numero: ");
	scanf_s("%d", &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("O maior numero e %d", num1);
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		printf("O maior numero e %d", num2);
	}
	else
	{
		printf("O maior numero e %d", num3);
	}

	return 0;
}

