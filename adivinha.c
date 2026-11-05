#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "");

    srand(time(NULL));

    int num =( rand() % 1000 + 1);
    int tentativa, contador = 0;

    printf("o numero que foi %i", tentativa );

    do
    {
        printf("Introduza um numero: ");
        scanf_s("%d", &tentativa);

        contador = contador + 1;


        if (tentativa < num)
        {
            printf("O numero esta maior!\n");
        }
        if (tentativa > num)
        {
            printf("O numero esta menor!\n");
        }
        
            printf("Numero de tentativas: %d\n", contador);
        

    } while (tentativa != num);

    return 0;

}