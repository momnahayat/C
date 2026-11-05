#include <stdio.h>
#include <locale.h>
int main()
{
    float C, F, V;
    char M;

    printf("Converter Celsius ou Fahrenheit (C/F): ");
    scanf_s("%c", &M);

    printf("Introduza o valor da temperatura: ");
    scanf_s("%f", &V);

    if (M == 'C' || M == 'c')
    {
        C = V;
        F = (C * 9 / 5) + 32;

        printf("Valor em Celsius: %.2f C\n", C);
        printf("Valor em Fahrenheit: %.2f F\n", F);
    }
    else
    {
        F = V;
        C = (F - 32) * 5 / 9;

        printf("Valor em Fahrenheit: %.2f F\n", F);
        printf("Valor em Celsius: %.2f C\n", C);
    }

    return 0;
}
