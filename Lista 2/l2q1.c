#include <stdio.h>
#include <stdlib.h>

/*Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse
numero.*/


int main(int argc, char *argv[]) {
float num;

printf("Digite um numero real: ");
scanf("%f",&num);

printf("%.2f ao quadrado eh %.2f",num,num*num);
	
	return 0;
}
