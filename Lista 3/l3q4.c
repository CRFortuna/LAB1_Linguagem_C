#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int multiplica(int *p)
{
	for(*p=1;*p<6;(*p)++)
	{
		printf("%d\n",3 * (*p));	
	}
	return ;	
}

int main(){
	int  i;
	multiplica(&i);
	system("pause" );
	return 0 ;
}
