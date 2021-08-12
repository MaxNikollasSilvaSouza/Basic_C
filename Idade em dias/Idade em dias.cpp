#include <stdio.h>
#include<conio.h>

main()
{

int ano, mes, dia, total;

scanf("%p",&ano);
scanf("%p",&mes);
scanf("%p",&dia);

total = dia+ (ano*365)+(mes*30);

printf("Total de dias = %p", total);
}
