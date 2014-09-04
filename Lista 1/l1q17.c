#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float h,p,pi;
	int sex;
	
	
	prinf("Seu sexo:\n  1-Homem \n -Mulher\n\n");
	scanf("%d",&sex);
	if(sex==1){
		printf("Digite sua altura: \n");
		scanf("%f",&h);
		pi=(72.7*h)-58;
		printf("Digite seu peso: \n\n");
		scanf("%f",&p);
		printf("Seu peso ideal eh %d\n",pi);
		if(p==pi){
			printf("Vc esta dentro do peso!");
		}else if(p>pi){
			print("Vc esta acima do peso");
		}else{
			printf("Vc esta abaixo do peso");
		}
		
	}else{
	printf("Digite sua altura: \n");
		scanf("%f",&h);
		pi=(62.1*h)-44.7;
		printf("Digite seu peso: \n\n");
		scanf("%f",&p);
		printf("Seu peso ideal eh %d\n",pi);
		if(p==pi){
			printf("Vc esta dentro do peso!");
		}else if(p>pi)
		{
			print("Vc esta acima do peso");
		}else
		{
			printf("Vc esta abaixo do peso");
		}
		
		
	}
	
	
	return 0;
}
