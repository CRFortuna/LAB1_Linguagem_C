#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calc(int *pnum, int *paux)
{
	int i;

	for(i=0;i<5;i++)
	{
		scanf("%d", &*pnum);
		*paux = *pnum + *paux;
	}

	printf("Soma dos numeros %d\n", *paux);
	return;	
}


int main()
{
	int num, aux=0;
	calc(&num, &aux);	
	system("pause");
	return 0;
}
