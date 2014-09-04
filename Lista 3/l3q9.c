#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void usedowhile(int *pppi)
{
	do
		printf("%d ",(*pppi)++);
	while(*pppi<101);
	printf("\n");
}

void usewhile(int *ppi)
{
	while(*ppi<101)
		printf("%d ",(*ppi)++);
	printf("\n\n");
	*ppi=1;
	usedowhile(ppi);
}

void usefor(int *pi)
{
	for (*pi=1;*pi<101;(*pi)++)
		printf("%d ", *pi);
	printf("\n\n");
	*pi=1;
	usewhile(pi);	
}


int main()
{
	
		int i;
	usefor(&i);

	system("pause");    
	return 0;
}
