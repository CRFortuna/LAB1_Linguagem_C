#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int proc_vet(int *ppvet)
{
	int i,j,x=ppvet[0];

	for(i=0;i<10;i++)
	{
		printf("-> %d - %d \n", i, ppvet[i]);
		if(ppvet[i]>x)
		{
			x = ppvet[i];
			j=i;
		}
	}

	printf("\n maior numero: %d\n",x);
	for(i=0;i<10;i++)
		if(ppvet[i]==x)
			printf("Encontra-se na posicao: %d\n",i);

	return j;
}
void fvetor(int *pvet)
{
	int i;

	for(i=0;i<10;i++)
	{
		scanf("%d",&pvet[i]);

	}	

	return;
}


int main()
{
int vet[9];
	fvetor(vet);
	proc_vet(vet);

	system ("pause");	
	return 0;
}
