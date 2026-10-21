#include <stdio.h>
#include <locale.h>

int main(void)

{

	setlocale(LC_ALL, "");
	int n;

	printf("diz um número \n");
	scanf("%d", &n);

	for (int i = 1; i <= 10; i++)

	{
		printf("%d x %d = %d\n", numero, i, numero * i);

	}
	return 0;
}
