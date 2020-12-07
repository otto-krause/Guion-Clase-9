#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,fc=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&n);
	while(n>1){
	fc=fc*n;
	n=n-1;
		}
	printf("\nSu factorial es  %d",fc);
}
