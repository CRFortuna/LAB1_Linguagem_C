#include <stdio.h>
#include <stdlib.h>

/* are do circulo*/

int main(int argc, char *argv[]) {
	int raio;
	int pi;
	
	pi=3,141592;
	
	printf("Digite o valor do raio: ");
	scanf("%d",&raio);
	
	printf("O valor da area e de : %d",(raio*raio)*pi);	
	
	return 0;
}
