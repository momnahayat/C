#include <stdio.h>
#include <locale.h>

main(void)
{

	float lado,area,perimetro;

	printf("Digite o lado do quadrado: ");
	scanf_s("%f", &lado);

	area = lado * lado;
	perimetro = 4 * lado;

	printf("Area: %.2f\n", area);

	printf("Perimetro: %.2f\n", perimetro);



}
