#include <stdio.h>
#include <stdlib.h>


void dados()
{
	int nhab,cod, i=0;
	float energ1=0,energ2=0,energ3=0, aux_energ, maior_energ=0, menor_energ=9999999;

	printf("Informe numero de habitantes: ");
	scanf("%d", &nhab);

	while(i<nhab)
	{
		i++;
		system("cls");
		printf("|1 - Residencial |\n");
		printf("|2 - Comercial   |\n");
		printf("|3 - Industrial  |\n");
		printf("Informe o codigo e consumo mensal (ex: 1 25.9): ");
		scanf("%d %f",&cod, &aux_energ );

		if(cod>0 && cod<4)
		{

			if(aux_energ < menor_energ)
				menor_energ = aux_energ;
			if(aux_energ > maior_energ)
				maior_energ = aux_energ;

			switch(cod)
			{
				case 1: 	energ1 = energ1 + aux_energ;
				case 2:	energ2 = energ2 + aux_energ;
				case 3:	energ3 = energ3 + aux_energ;
			}
		}
		else
		{
			printf("\n\nCodigo nao confere!");
		
			i--;
		}
	}
	aux_energ = (energ1 + energ2 + energ3)/nhab; //média de consumo.

	system("cls");
	printf(" Consumo da Cidade\n");
	printf("Menor consumo: %.2f kwh.\n",menor_energ);
	printf("Maior consumo: %.2f kwh.\n",maior_energ);
	printf("Consumo medio: %.2f kwh.\n",aux_energ);
	printf("\nConsumo por tipo de habitante:\n");
	printf("1 - Residencial: %.2f kwh.\n",energ1);
	printf("2 - Comercial:   %.2f kwh.\n",energ2);
	printf("3 - Industrial:  %.2f kwh.\n\n",energ3);



	return;   
}

int main()
{
	dados();
	system("pause");
	return 0;

}
