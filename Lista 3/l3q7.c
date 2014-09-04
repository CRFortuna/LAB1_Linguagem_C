#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void primo(int *num, int *i, int *contador)
{
	printf("Digiteum numero: ");
	scanf("%d", *&num);
	for(*i=*num;*i>0;(*i)--)
	{
		if(*num%*i==0)
			(*contador)++;
	}
	if(*contador>2)	
		printf("Numero não primo\n");
	else 
		printf("Numero primo\n");
	return;	
}

int main()
{
int num,i,cont=0;
primo(&num, &i, &cont);	

system("pause");
return 0;
}
