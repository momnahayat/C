#include <stdio.h>

int main(void)

{
    float base;
    float altura;
    float area;
    float perimetro;


    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);


    area = base * altura;
    perimetro = 2 * (base + altura);


    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;

}
