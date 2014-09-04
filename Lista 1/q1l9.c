#include <stdio.h>
#include <stdlib.h>

/* de m 4 cm */

int main(int argc, char *argv[]) {
	int m, cm;
	
	printf("Digite o valor em metros: ");
	scanf("%d",&m);
	
	cm=m*100;
	
	printf("%d m equivale a %d cm",m,cm);
	return 0;
}
