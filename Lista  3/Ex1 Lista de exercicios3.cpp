#include <stdio.h>
#include <conio.h>

main()
{
	int x,n,i,ac;
	
	printf("Insira a base da potencia: ");
	scanf("%d",&x);
	
	printf("Insira o expoente: ");
	scanf("%d",&n);
	
	ac=1;
	i=1;
	/*while(i<=n)
	{
		ac = ac*x;		
		i++;
	}
	
	do
	{
		ac = ac*x;		
		i++;
		
	}while(i<=n>);*/
	
	for(int i = 1; i<=n;i++)
	{
		ac = ac*x;
	}
	
	printf("%d elevado a %d = %d\n",x,n,ac);
}

