#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	
	setlocale(LC_ALL, "portuguese");
	int ano;
	
	printf("Digite o ano:");
	scanf("%d", &ano);
	
	ano=ano*31536000;
	
	printf("O coração bateu por volta de: %d\n", ano);
	
	system("pause");
	return 0;
}
