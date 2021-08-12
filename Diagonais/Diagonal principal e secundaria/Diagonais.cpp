#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
int i,j,ord;
int aux,ac=0,dp=0,ds=0,acdp=0,abdp=0,acds=0,abds=0;
printf("Informe a ordem da matriz ");
scanf("%d",&ord);
int mat[ord][ord];
srand(time(NULL));
for(i=0;i<ord;i++)
{
for(j=0;j<ord;j++)
{
mat[i][j] = rand()%10;
}
}
for(i=0;i<ord;i++)
{
for(j=0;j<ord;j++)
{
ac=ac+mat[i][j];//soma todos os números da matriz
if(i==j)// diagonal principal
{
dp=dp+mat[i][j];
}
if(i+j==ord-1)// diagonal secundária
{
ds=ds+mat[i][j];
}
if(i<j)//acima da diagonal principal
{
acdp=acdp+mat[i][j];
}
if(i>j)//abaixo da diagonal principal
{
abdp=abdp+mat[i][j];
}
if(i+j<=ord-2 )//acima da diagonal secundária
{
acds=acds+mat[i][j];
}
if(i+j>=ord)//abaixo da diagonal secundária
{
abds=abds+mat[i][j];
}
}
}
printf("\n\n");
for(i=0;i<=ord-1;i++)
{
for(j=0;j<=ord-1;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n\n");
}
printf("\n\nSoma dos numeros = %d\n",ac);
printf("Soma da diagonal principal = %d\n",dp);
printf("Soma da diagonal secundaria = %d\n",ds);
printf("Soma acima diagonal principal = %d\n",acdp);
printf("Soma abaixo diagonal principal = %d\n",abdp);
printf("Soma acima diagonal secundaria = %d\n",acds);
printf("Soma abaixo diagonal secundaria = %d\n",abds);
//mostrar na tela o elemento central da matriz
//SE HOUVER!!!!!!!
if(ord%2==0)
{
printf("NAO existe elemento central\n");
}
else
{
}
}
