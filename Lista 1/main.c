#include <stdio.h>
#include <stdlib.h>

/* media 4 notas */

int main(int argc, char *argv[]) {
int a,b,c,d;
float m;

printf("Digite as 4 notas do Aluno :");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);


printf("A média deste Aluno eh: %d",(a+b+c+d)/4);

	return 0;
}
