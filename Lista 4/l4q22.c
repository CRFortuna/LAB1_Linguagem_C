#include<stdio.h>

char *transforma(char *p1)
{
	int i;

	for(i=0;i<strlen(p1);i++)
	{
		if(p1[i] > 64 && p1[i] < 91)
			p1[i] = p1[i] + 32;

	}
	return p1;	
}

char *recebe()
{
	char *p1;

	p1 = (char *)malloc(sizeof(char)*30);

	printf("Informe frase: ");
	gets(p1);

	return transforma(p1);
}

int main()
{
char *p1;

	p1 = (char *)malloc(sizeof(char)*30);

	printf("Informe frase: ");
	gets(p1);
	transforma(p1);
	
	system("pause");	
	return 0;
}
