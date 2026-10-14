#include <stdio.h>

#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");

	int kmf, kmi, Litros;

		float litrosaaoscea;

	printf("Diz a quilometragem no inicio da viagem\n ");
	scanf("%d", &kmf);


	printf(" Diz a quilometragem no fim da viagem\n  ");
	scanf("%d", &kmi);

	printf(" Diz a quilometragem no fim da viagem\n  ");
	scanf("%d", &Litros);

	float distancia = kmf - kmi;
	float media = (Litros / distancia) * 100;

	printf("Os litros aos cem são % .2f litros aos 100; kms.\n", media);

	return 0;


}