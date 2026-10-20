#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int quantidade, numero, soma = 0;

    printf("Quantos numeros quer somar? ");
    scanf_s("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++)
    {
        printf("Introduza um numero: ");
        scanf_s("%d", &numero);

        soma = soma + numero;
    }

    printf("A soma dos numeros e: %d", soma);

    return 0;
}