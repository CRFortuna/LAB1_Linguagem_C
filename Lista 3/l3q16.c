#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calculo(int *aux, int *aux2, int *c, int *num)
{
	int  soma=0;
	while (*aux < *num) //Imprimi até o número de fibonacci anterior a 4.000.000;
	{
		*c = *aux + *aux2;
		printf("%d \n",*aux);
		if((*aux)%2 == 0)
			soma = soma + (*aux);
		*aux = *aux2;
		*aux2 =*c; 

	}
	printf("\n\n soma: %d\n\n",soma);

	return;
}

int main()
{
int aux=0, aux2=1,c=0, num;
	printf("Informe valor: ");
	num= 100;

	calculo(&aux, &aux2, &c, &num);

	system("pause");
	return 0;
}
