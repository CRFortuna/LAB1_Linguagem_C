#include <stdio.h>
#include <stdlib.h>

/* calcula salario */

int main(int argc, char *argv[]) {
int	vht, hm;

printf("Digite quando vale sua hora de trabalho, em seguinda quantas horas vc trabalha no mes");
scanf("%d",&vht);
scanf("%d",&hm);

printf("O valor de seu salario eh de: %d",vht*hm);
	return 0;
}
