#include<stdio.h>
#include <time.h>
#include<stdlib.h>

main()
{

	int i,j,lin,col;
	srand(time(NULL)); //-> precisa da biblioteca <stdlib.h> e da <time.h>
	printf("Informe a quantidade de linhas: ");
	scanf("%d",&lin);
	printf("Informe a quantidade de colunas: ");
	scanf("%d",&col);
	int mat[lin][col];
	
	for(i=0;i<lin; i++)
	{
		for(j=0;j<col; j++)
		{
			mat[i][j] = rand()%100;
		}
	}
	
	for(i=0;i<lin; i++)
	{
		for(j=0;j<col; j++)
		{
			if(j==(col-1))
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



