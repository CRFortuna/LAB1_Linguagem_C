#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define tam 30

void copia_nome(char *nome, char *aux)
{
	int i=0;

	while(aux[i] != '\0') // VERIFICAR FINAL ' '
	{
		nome[i] = aux[i];
		i++;
	}
	nome[i] = '\0';
	return;
}


int main()
{
char nome1[tam], nome2[tam], aux_nome[tam];
	int idade1, idade2, aux_idade;

	printf("Digite valor negativo para parar.\n");
	printf("informe idade: ");
	scanf("%d", &aux_idade);

	if(aux_idade <0)
		return;

	printf("informe Nome: ");
	scanf("\n\r%[^\n]", &aux_nome);
	idade1 = idade2 = aux_idade;

	copia_nome(nome1, aux_nome);
	copia_nome(nome2, aux_nome);



	do
	{
		system("cls");
		printf("Digite valor negativo para parar.\n");
		printf("informe proxima idade: ");
		scanf("%d", &aux_idade);

		if(aux_idade <0)
			break;

		printf("informe proximo Nome: ");
		scanf("\n\r%[^\n]", &aux_nome);



		if(aux_idade < idade1)
		{
			idade1 = aux_idade;
			copia_nome(nome1, aux_nome);	
		}	
		if(aux_idade > idade2)
		{
			idade2 = aux_idade;
			copia_nome(nome2, aux_nome);
		}			
	}while(aux_idade > 0);

	printf("Pessoa mais nova: %s, %d anos.\n", nome1, idade1);
	printf("Pessoa mais velha: %s, %d anos.\n", nome2, idade2);
	system("pause");	
	return 0;
}
