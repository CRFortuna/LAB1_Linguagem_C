#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void divi(int *i, int *num)
{	
    scanf("%d", &*num);
        printf("Os divisores de %d sao: ", *num);
    for(*i=*num; *i>0; (*i)--)
    {
        if(*num % *i==0)
        {
            printf("%d, ",*i);   
        }   
        
    }	
	printf("\n");
};

int main()
{
	int num,i;
	divi(&i, &num);
    
    system("pause");
    return 0;
}
