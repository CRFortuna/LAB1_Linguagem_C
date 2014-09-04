#include <stdio.h>
#include <stdlib.h>

/*area do quadrado e o valor dobrado */

int main(int argc, char *argv[]) {
int l;

printf("Digite  valor do lado do quadrado: ");
scanf("%d",&l);

printf("A area do quadrado eh de %d e o seu dobro eh %d",l*l,(l*l)*2);
	return 0;
}
