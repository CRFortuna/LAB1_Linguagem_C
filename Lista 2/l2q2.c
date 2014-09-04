#include <stdio.h>
#include <stdlib.h>

/* Ler um numero e retorne seu antecessor e seu sucessor */


int main(int argc, char *argv[]) {
int num;

printf("Digite o um numero: ");
scanf("%d",&num);

printf("\n\nAntecessor = %d\nNumero = %d \nSucessor = %d",num-1,num,num+1);
	return 0;
}
