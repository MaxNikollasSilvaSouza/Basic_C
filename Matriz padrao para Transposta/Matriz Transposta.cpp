#include<stdio.h>
#include <time.h>
#include<stdlib.h>

main()
{
	int mat[100][100];
	int transp[100][100];
	
	int i,j,lin,col;
	srand(time(NULL)); //-> precisa da biblioteca <stdlib.h> e da <time.h>
	printf("Informe a quantidade de linhas: ");
	scanf("%d",&lin);
	printf("Informe a quantidade de colunas: ");
	scanf("%d",&col);
	
	
	for(i=0;i<lin; i++)
	{
		for(j=0;j<col; j++)
		{
			mat[i][j] = rand()%100;
			transp[j][i] = mat[i][j];
		}
	}
	printf("Matriz Padrao\n");
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
	
	
	printf("\n\n\n");
	printf("Matriz Transposta\n");
	
	for(i=0;i<col; i++)
	{
		for(j=0;j<lin; j++)
		{
			if(j==(lin-1))
			{
				printf("%d\n",transp[i][j]);
			}
			else
			{
				printf("%d\t",transp[i][j]);
			}
			
		}
	}
	
	
	
	
	
}




