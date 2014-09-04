#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int corre(int *c,int*d)
{

	printf("informe valor: ");
	scanf("%d", &*d);	
	for(*c=0;c<d;(*c)++)
	{
		(*c)++;
		printf("%p\n",*c);	
	};
	return ;	
}


int main()
{
	int a,b;
	
	corre(&a,&b);

	system("pause");
	return 0;
}
