#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int i;
	int vet[11];
	int posi;
	for(i=1;i<11;i++){
		printf("preencha : ");
		scanf("%d",&vet[i]);
	};
	posi=busca(&vet);
	if(posi!=0){
	printf("Está na posicao %d",posi);
};
	return 0;
}

int busca(int *vet){
	int x;
	int i;
printf("\ndigite o numero que vc busca :");
	scanf("%d",&x);
	for (i=1;i<11;i++){
		if(vet[i]==x)
		return i;	 	
		};
		printf("\n Fim!/n A busca falhou \n\n");
	 	return;
	   	
}
