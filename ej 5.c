#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,n=0,n1=0,ptn=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&n);
  	printf("\nIngrese otro numero ");
  	scanf("%d",&n1);
	while (n1>i)
	{
	ptn=ptn*n;
	i=i+1;
	}
	printf("\nLa potencia es %d ",ptn);
}
