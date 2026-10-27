#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    int num, i, contar = 0;
    printf("Diz aí um número \n");
    scanf_s("%i", &num);
    for (i = num; i >= 1; i--)
    {
        if (num % i == 0)
        {
            contar++;
        }
    }
    if (contar > 2)
    {
        printf("O número não é primo");
    }
    else
    {
        printf("O número é primo");
    }
    return 0;
}

