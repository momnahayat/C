#include<stdio.h>
int main(void)
{
	int qual;
	char sair;
	char* carros[3] = { "fiat","Simca","Opel" };
	do
	{
		printf("Quers que carro?(0a2)\n");
		scanf_s("%i", &qual);
		if (qual > 2 || qual < 0)
			printf("numero inválido\n");

		else
			printf("%s \n", carros[qual]);
		printf("desejs sair?(s\n)\n");
		scanf_s("%c", &sair);
		while (sair != "s");
	} 
	while (sair !="s");
	
	return 0;




}