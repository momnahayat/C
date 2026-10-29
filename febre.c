#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    float t1, t2;

    printf("Diz a temperaturas\n");
    scanf_s("%f", t1);

    printf("Diz a temperaturas\n");
    scanf_s("%f", t2);

    if (t1 < 35.5 || t2 < 35.5)
    {

        printf("Ès anfíbio");
    }
    else if ((t1 > 35.5 && t1 < 37) && (t2 > 35.5 && t2 < 37))
    {
        printf("temperaturas Normal\n");
    }
    else
    {
        printf("febre");
        if (t1 > t2)
            printf("baixou");
        else if (t1 < t2)
            printf("aumentou");
        else
            printf("manteve");

    }
    return 0;
}