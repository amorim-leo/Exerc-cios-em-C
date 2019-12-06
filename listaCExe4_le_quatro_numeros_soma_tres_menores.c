#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, aux, re;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	aux=n;
	re=0;
	
	while(aux!=0)
	{
		re=re*10+aux*0.1;
		aux=aux/10;
	}
	if(re==n)
	{
		printf("%d e polindromo\n", n);
	}
	else
	{
		printf("%d nao e polindromo\n", n);
	}
	
	system("pause");
	return 0;
}
