#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,nm=0,acu=0,n=0;
	float pm=0;
	while (5>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&n);
		acu=acu+n;
		if(n>nm){
			nm=n;
		}
		i=i+1;
	}
	pm=acu/5;
	printf("\n El numero promedio es %.2f",pm);
	printf("\n El numero mas grande es %d",nm);
	return 0;
}
