#include <stdio.h>
#include <conio.h>

main()
{

int anos, meses, dias, diass, coringa;

scanf("%d",&diass);

anos =  diass/365;
coringa = diass%365;
meses = coringa/30;
coringa = coringa%30;
dias = coringa;

printf("%d",anos);
printf("\n");
printf("%d", meses);
printf("\n");
printf("%d",dias);
}
