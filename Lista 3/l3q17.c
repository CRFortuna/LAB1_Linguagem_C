#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int verifica_num(int num, int *cont)
{
	int verifica=0,i=0;
	char txt[10];

	sprintf(txt, "%d", num);
	(*cont)++;

	if(strlen(txt)%2==0) // verifica se o numero possui numero de digitos par.
	{
		do
		{
			if(txt[i] == txt[(strlen(txt)-1)-i]) //compara a primeira metade com a segunda de tras pra frente.
				{
					verifica = 1;
					i++;
				}
			else
				verifica = 0;

		}while(verifica==1 && i<(strlen(txt)/2)); //verifica se continua igual apos cada verificacao e se ja chegou na metade do numero de digitos.
		return verifica;
	}
	else
		return verifica;

}

void multiplica ()
{

	int i,j,num1, num2, result, palind=0, cont=0;

	for(i=100; i>10; i--) // Faz a contagem para a multiplica��o do 1o. numero
	{
		for(j=100; j>10; j--) // Faz a contagem para a multiplica��o do 2o. numero
		{
			result = 0;
			result = i*j;
			if(palind < result) // Verifica se o proximo palindrome achado � maior que o anterio salvo
			{
				if(verifica_num(result,&cont) == 1)
				{
//				printf("%d\n",result);

					num1 = i;
					num2 = j;
					palind = result;
				}
			}	

		}
	}

	printf("Maior palindrome com multiplicacao de 3 digitos: %d * %d = %d | cont = %d\n",num1,num2,palind,cont);
	return;

}



int main()
{

	multiplica();
	system("pause");
	return 0;
}
