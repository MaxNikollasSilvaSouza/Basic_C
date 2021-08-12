#include <stdio.h>
#include <conio.h>

main()
{
	int inicial, fim,somatoria =0;
	printf("Digite o valor inicial: ");
	scanf("%d",&inicial);
	
	printf("Digite o valor final: ");
	scanf("%d",&fim);
	
	if(inicial < fim)
	{
		while(inicial<= fim)
		{	
			somatoria += inicial;		
			inicial +=1;
		}
		printf ("%d\n", somatoria);
	}
	else
	{
		while( inicial >= fim)
		{	
			somatoria += inicial;
			inicial -=1;
		}
		printf ("%d\n", somatoria);
	}
}
