#include <stdio.h>
#include <conio.h>

main()
{
float det, a, b, c, x1, x2;

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

det = (b*b) - (4*a*c);

if(det < 0)
{
	printf("Não existe raiz");
}
else if(det == 0)
{
	x1 = -b/(2*a);
	printf("Raizes iguais: %f",x1);
}
else
{
	x1 = (-b + det)/2*a;
	x2 = (-b-det)/2*a;
	printf("Duas raizes distintas:");
	printf("x1: %f\n",x1);
	printf("x1: %f",x2);
}



	
}
