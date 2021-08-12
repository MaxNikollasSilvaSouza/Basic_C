#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float A,B,C,delta;
	
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	
	//delta = (B*B) - 4 * A* C;
	
	delta = pow(B,2)-4*A*C;
	
	printf("Delta = %.2f",delta);
	
	
}
