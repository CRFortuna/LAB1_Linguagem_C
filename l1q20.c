#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Tini,Tnow,Tfim,i;
	
	printf("Digite o tamanho do arquivo em MB: \n");
	scanf("%f",&Tfim);
	printf("informe a velocidade do download em Mbps: \n");
	scanf("%f",&Tini);
	Tnow=Tini;
	i=1;
	while(Tnow<Tfim){
		Tnow=Tnow+Tini;
		i++;
	}
	printf("\n\nO download do seu arquivo levará aproximadamente %.2f min",i/60);
	
	
	return 0;
}
