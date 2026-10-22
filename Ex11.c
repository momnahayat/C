#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int n;

    do
    {
        printf("Diz um número\n");
        scanf("%i", &n);

                     
      
        if (n % 3 == 0 && n != 0)
        {
            printf("O número é múltiplo de 3\n");
        }
        if (n% 5 == 0 && n != 0)
        {
            printf("O número é múltiplo de 5\n");
        }

    } while (n!= 0);

    printf("Digitou 0 - vai sair do programa");

    return 0;
}
