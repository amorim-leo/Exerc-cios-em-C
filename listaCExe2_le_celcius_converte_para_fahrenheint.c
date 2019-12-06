#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l;
	float fa,cel;
	
	printf("Digite 0 se vc quiser converter Fahrenheit em cessius ou 1 para palegadas em milimetro:");
	scanf("%d", &l);
	
	while(l!=1 && l!=0)
	{
		
		printf("Digite 0 se vc quiser converter Fahrenheit em cessius ou 1 para palegadas em milimetro: ");
		scanf("%d", &l);
	}
	
	if(l==0)
	{
		printf("Digite o valor em Fahrenheit:");
		scanf("%f", &fa);
		
		cel=(5*fa-160)/9;
		
		printf("O valor de %.2f\370F em celsius e: %.2f\370C\n", fa, cel);
	}
	else
	{
		printf("Digite o valor em polegadas:");
		scanf("%f", &fa);
		
		cel=fa*25.4;  
		
		printf("O valor de %.2f em milimetros e: %.2fmm\n", fa, cel);
	}
	
	system("pause");
	return 0;
}
