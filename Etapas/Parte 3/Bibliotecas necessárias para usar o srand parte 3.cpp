#include<stdio.h>
#include <time.h>
#include<stdlib.h>

main()
{

	int i,j,ordem;
	srand(time(NULL)); //-> precisa da biblioteca <stdlib.h> e da <time.h>
	printf("Informe a ordem da matriz: ");
	scanf("%d",&ordem);

	int mat[ordem][ordem];
	
	for(i=0;i<ordem; i++)
	{
		for(j=0;j<ordem; j++)
		{
			mat[i][j] = rand()%100;
		}
	}
	
	for(i=0;i<ordem; i++)
	{
		for(j=0;j<ordem; j++)
		{
			if(j==(ordem-1))
			{
				printf("%d\n",mat[i][j]);
			}
			else
			{
				printf("%d\t",mat[i][j]);
			}
			
		}
	}
	
	
}




