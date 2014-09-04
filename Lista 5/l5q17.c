#include<stdio.h>

float endereco(float *num)
{
	int i;
	printf("\n");	
	for (i=0;i<9;i++)
		printf("Endereco %d = posicao %i\n",i, &num[i]);

	return 0;
}


int main()
{
	float a[9];
	int i;

	printf("digite 10 numeros: ");

	for (i=0;i<9;i++)
		scanf("%f",&a[i]);
	system("pause");
	return 0;
}

