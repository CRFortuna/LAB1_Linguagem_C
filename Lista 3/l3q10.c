#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calc(int *pi, int *pcont, char *pbin)
{
	for ((*pi)=0;*pi<strlen(pbin);(*pi)++)
		if (pbin[*pi]=='1')
			(*pcont)++;  

	printf("existem %d 1's.\n", *pcont);
	return;
}

int main()
{
int i,cont=0;
	char bin[100];
	scanf("%s", &bin);
	calc(&i, &cont, bin); 
	
	system("pause");    
	return 0;
}
