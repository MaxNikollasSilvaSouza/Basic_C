#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main ()
{
	float n1,n2,n3, media_p;
	int aulas_totais, faltas;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f",&n2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%f",&n3);
	
		printf("\nDigite a quantidade de aulas: ");
	scanf("%f",&aulas_totais);
	
		printf("\nDigite a quantidade de faltas: ");
	scanf("%f",&faltas);
	
	media_p = (n1*1+n2*2+n3*3)/6;
	
	
		
	if((faltas/aulas_totais)*100 > 25)
	{
	printf("media = %.2f\n",media_p);
	if(media_p >=6)
	{
		printf("Aprovado\n");
	}
	else if (media_p <6 && media_p > 3)
	{
		printf("Recuperacao\n");
	}	
	else
	{
		printf("Reprovado\n");
	}
	
	}
	else
	{
	printf("Reprovado por faltas\n");	
	}
	
	system("pause");
	
}
