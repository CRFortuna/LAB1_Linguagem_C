#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calcula(int *pA, int *pB)
{
	int C[10],i;

	for(i=0;i<11;i++)
		C[i] = pA[i] - pB[i];
	printf("\nVetor C: ");
	for(i=0;i<11;i++)
		printf("| %d ",C[i]);
		printf("|\n\n");
	return;

}

void preenche(int *pvet)
{
	int i;
	for(i=0;i<11;i++)
	{
		scanf("%d", &pvet[i]);		
	}

	return;
}


int main()
{
int A[10],B[10];
	
	printf("informe o 1 vetor: \n");
	preenche(A);
	printf("\ninforme o 2 vetor: \n");
	preenchevetor(B);
	calcula(A,B);
	system("pause");
	return 0;

}
