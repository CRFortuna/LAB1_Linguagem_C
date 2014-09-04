#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float peso,excesso,multa;
	
	printf("Digite o peso do peixe: ");
	scanf("%f",&peso);
	excesso=multa=0;
	if(peso>50)
{
	excesso=peso-50;
	multa=excesso*4.00;
	
	printf("O peixe passou do peso em %.2f de excesso\n Sua multa eh de R$ %.2f",excesso,multa);
}else{
	print("O peixe esta dentro do peso\n Excesso = %.2 \nMulta = %.2f");
	
}
	return 0;
}
