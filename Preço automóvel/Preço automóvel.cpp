#include <stdio.h>
#include <conio.h>

main()
{
	float PT, PF;
	char nome[30];
	
	scanf("%f", &PF);
	scanf("%s",&nome);
	
	PT = PF*0.45 + PF*0.28+PF;
	
	printf("%s",nome);
	printf("%f",PT);
	
	
	
	
}
