#include <stdio.h>
#include <conio.h>

main()
{
	int numero,tabuada=0, resultado = 0;
	printf("Digite o numero que deseja calcular: ");
	scanf("%d",&numero);
	
	while(tabuada <= 10)
	{
		resultado = numero*tabuada;
		printf("%d * %d = %d \n",numero,tabuada,resultado);
		tabuada+=1;
	}
}
