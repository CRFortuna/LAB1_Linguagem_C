#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *muda(int *pi, int *pcont, char *pbin)
{
    scanf("%[^\n]s", pbin); 
    
    while (*pi<strlen(pbin))
    {
		if (pbin[*pi]=='0')
			pbin[*pi]='1';  
		(*pi)++;
    }
	return pbin;	
}

int main()
{
int i=0,cont=0;
    char bin[100];
    
    printf("\nalteracao feita!\n%s.\n", muda(&i, &cont, bin));
    
    system("pause");    
    return 0;
}
