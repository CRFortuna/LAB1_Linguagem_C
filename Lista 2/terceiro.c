/*
Programa que pede um número e então mostre a mensagem O número informado foi [número]. 
 */


#include <stdio.h>

int main()
{
	int x;
	printf("\nDigite um numero inteiro: ");	
	scanf("%d",&x);
	printf("\n\nO numero informado foi [%d]",x);
	
	return 0;
}

