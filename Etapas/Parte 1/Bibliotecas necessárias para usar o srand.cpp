#include<stdio.h>
#include <time.h>
#include<stdlib.h>

main()
{
	int mat[3][4];
	int i,j;
	srand(time(NULL)); //-> precisa da biblioteca <stdlib.h> e da <time.h>
	
	for(i=0;i<=2; i++)
	{
		for(j=0;j<=3; j++)
		{
			mat[i][j] = rand()%100;
		}
	}
	
	for(i=0;i<=2; i++)
	{
		for(j=0;j<=3; j++)
		{
			if(j==3)
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



