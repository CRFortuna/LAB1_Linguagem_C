#include<stdio.h>
#include<stdlib.h>
/* graus farenheint 4 ccelsius */

int main() {
int graus;
	
printf("Digite a temperatura: \n");
	scanf("%d",&graus);
	
	printf(" %d \nFarenheit equivale a %d graus Celsius",graus,5*(graus-32)/9);
	return 0;
}
