#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n1, i;
	printf("diz me uma número para Count Down !!!\n");
	scanf_s("%d", &n1);
	for (i = n1; n1 >= 0; n1--)
	{
		printf("%d\n", n1);
	}
	return 0;
}
