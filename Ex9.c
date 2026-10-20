#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int tantofaz;

    do
    {
        printf("Diz um número\n");
        scanf("%i", &tantofaz);

        if (tantofaz > 0)
        {
            printf("O número é positivo\n");
        }
         if (tantofaz < 0)
        {
            printf("O número é negativo\n");
        }

    } while (tantofaz != 0);

    printf("Carregaste no zero , sai");

    return 0;
}