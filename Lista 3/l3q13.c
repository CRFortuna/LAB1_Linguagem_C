#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void conta(int *i)
{
	while(*i>-1)
	{
		printf("%d\n",(*i)--);
	}
}



int main()
{
int i=50;
	conta(&i);	
	printf("And!\n");
	
	system("pause");
	return 0;
}
