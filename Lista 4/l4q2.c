#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char string[50];
	scanf("%[^\n]s", &string);
	printf("%d", strlen(string));

	system("pause");
	return 0;	
}
