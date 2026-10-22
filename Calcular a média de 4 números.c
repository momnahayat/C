#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    float P1, P2, P3, P4, media;

    printf("Introduza o primeiro número: ");
    scanf("%f", &P1);

    printf("Introduza o segundo número: ");
    scanf("%f", &P2);

    printf("Introduza o terceiro número: ");
    scanf("%f", &P3);

    printf("Introduza o quarto número: ");
    scanf("%f", &P4);

    media = (P1 + P2 + P3 + P4) / 4;

    printf("A média é: %.2f\n", media);

    return 0;
}