#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2,n3,n4;
	
	printf("Digite o primeiro termo: ");
	scanf("%d", &n1);

	printf("Digite o segundo termo: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro termo: ");
	scanf("%d", &n3);
	
	printf("Digite o quarto termo: ");
	scanf("%d", &n4);
	
	if(n1>n2 && n1>n3 && n1>n4)
	
	{
		n1=n2+n3+n4;
		printf("%d+%d+%d=%d\n", n2, n3, n4, n1);

	}
	else if(n2>n4&&n2>n3&&n2>n1)
	{
		n2=n1+n3+n4;
		printf("%d+%d+%d=%d\n", n1, n3, n4, n2);

	}
	else if(n3>n1 && n3>n2 && n3>n4)
	{
		n3=n1+n2+n4;
		printf("%d+%d+%d=%d\n", n1, n2, n4, n3);

	}
	else if(n4>n1 && n4>n2 && n4>n3)
	{	
		n4=n1+n2+n3;
		printf("%d+%d+%d=%d\n", n1, n2, n3, n4);		
	}
	
	system("pause");
	return 0;
}


