#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l=0,i=1,acu=0,nota,prc;
	float pgc=0,prom;
	while(31>i){
		while (10>l){
			printf("\nIngrese la nota del alumno %d ",i);
			scanf("%d",&nota);
			acu=acu+nota;

			l=l+1;
			}
		prom=acu/10;
		printf("\n El promedio del alumno es %f",prom);
		prc=prc+prom;
		acu=0;
		prom=0;
		l=0;
		i=i+1;
		}
		pgc=prc/30;
	printf("\n El promedio general del curso es %f",pgc);

}
