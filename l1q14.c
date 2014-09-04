#include<stdio.h>
#include<stdlib.h>
/* graus farenheint 4 ccelsius */

int main() {
int graus;
	
printf("Digite a temperatura: \n");
	scanf("%d",&graus);
	
	printf(" %d \nCelsius  equivale a %d graus Farenheit",graus,9*(graus+32)/5);
	return 0;
}

