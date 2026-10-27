#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int num, i, quantos, max = -2147483648, min = 2147483647, sair = 1;

    do
    {
        printf("quantos números queres?");
        scanf_s("%i", &quantos);

        for (i = 1; i <= quantos; i++)
        {
            printf("qual o valor do %iº num?\n", i);
            scanf_s("%i", &num);

            if (num > max)
            {
                max = num;
            }

            if (num < min)
            {
                min = num;
            }
        }

        printf("O número máximo é: %i e o mínimo é: %i\n", max, min);
        printf("Deseja sair? (0-Sair, 1-Continuar)\n");
        scanf_s("%i", &sair);

    } while (sair != 0);

    return 0;
          


        
         