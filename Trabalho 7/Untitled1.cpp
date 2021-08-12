#include <stdio.h>
#include <conio.h>

main()
{
	float a,b,c;
	
	printf("Digite o primeiro valor da soma: ");
	scanf("%f",&a);
	
	printf("Digite o segundo valor da soma: ");
	scanf("%f",&b);
	
	c = a+b;
	printf("A soma = %0.2f \n\n",c);
	
	c = a-b;
	printf("A subtracao = %0.2f \n\n",c);
	
	c = a*b;
	printf("A multiplicacao = %0.2f \n\n",c);
	
	c = a/b;
	printf("A divisao = %0.2f \n\n",c);
}
