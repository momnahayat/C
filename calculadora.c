#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    setlocale(LC_ALL, "");

    srand(time(NULL));

    int num = rand() % 1000 + 1;
    int num1, num2, resultado;
    char op;

    printf("Escolha a operacao (A/S/M/D): ");
    scanf_s(" %c", &op);

    printf("Introduza dois numeros: ");
    scanf_s("%d %d", &num1, &num2);

    switch (op)
    {
    case 'A':
        resultado = num1 + num2;
        break;

    case 'S':
        resultado = num1 - num2;
        break;

    case 'M':
        resultado = num1 * num2;
        break;

    case 'D':
        resultado = num1 / num2;
        break;

    default:
        printf("Operacao invalida!");
        return 0;
    }

    printf("Resultado = %d", resultado);

    return 0;
}