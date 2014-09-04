#include <stdio.h>
#include <stdlib.h>

/*Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera
ser paga, sabendo-se que são descontados 8% para inss. */

int main(int argc, char *argv[]) {
	int d;
	float sal;
	printf("Digite quantos dias o encandor trabalhou: ");
	scanf("%d",&d);
	sal=(d*30)-(d*(30)*8)/100;
	printf("\n\nO Encanador deve receber %.2f",sal);
	return 0;
}
