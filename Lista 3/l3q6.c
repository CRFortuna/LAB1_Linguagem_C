#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void soma(int *a, int *b)
{
	for(*a=0;*a<100;(*a)++)
	{
		(*a)++;
		*b= *b+(*a);

	}
	return;	
}

int main()
{
		int a,b=0;
	soma(&a,&b);
	printf("%d\n",b);

	system("pause");
	return 0;
}
