#include <stdio.h>
#include <conio.h>


main()
{
	int A,B,C;	
	
	printf("Digite a menor medida, a medida media e a maior medida nessa mesma ordem: \n");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);	
		
	
	if ((A + B > C) || (A+C > B) || (B+C >A))
	{
	
	if (A == B && A == C && B == C)
	{
		printf("Triangulo equilatero!");
	}
	
	else if (A != B && A != C && B != C)
	{
		printf ("Triangulo escaleno!");	
	}
	
	else 
	{
		printf("Triangulo isoceles!");
	}
	
	}
	else 
	{
		printf("Isso nao e um triangulo!");
	}
}
