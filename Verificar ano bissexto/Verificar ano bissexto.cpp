#include <stdio.h>
#include <conio.h>

main ()
{
	int ano;
	printf("Digite o ano: ");
	scanf("%f",&ano);
	
	if (ano %4 == 0)
	{
		printf("Esse ano e bissexto");
		
	}
	else
	{
		printf("Esse ano não e bissexto");
	}
	
}
