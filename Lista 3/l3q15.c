#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int plus(long int *psoma)
{
	int cont=0;

	while(cont<1001)
	{
		cont+=5;
		*psoma = *psoma + cont;		
	}
	cont=0;
	while(cont<1001)
	{
		cont+=3;
		*psoma = *psoma + cont;		
	}	
	return *psoma;	
}

int main()
{
long int soma=0;
	printf("%d\n", plus(&soma));
	system("pause");	
	return 0;
}
