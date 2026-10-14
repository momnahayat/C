#include <stdio.h> 
#include <locale.h>
int main(void)

{

	setlocale(LC_ALL, "");
	float notas;

	printf("Qual a nota do aluno? ");
	scanf_s("%f", &notas);

	if (notas < 9.5)

	{
		printf("Reprovado, estuda mais!");
	}
	else
	{
		printf("Passou de ano!");
	}

	return 0;

}