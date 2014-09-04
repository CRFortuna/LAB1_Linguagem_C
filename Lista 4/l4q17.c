#include<stdio.h>



int main()
{
float val;
	char merc[10];

	printf("Digite nome da mercadoria: ");
	scanf("%[^\n]s",merc);
	printf("Informe valor: ");
	scanf("%f", &val);

	printf("\n|produto: %s \n|valor: %.2f \n|A vista: 10%% de desconto \n|preco com desconto: %.2f\n\n", merc, val,  val-(val*0.1));
	system("pause");
	return 0;	
}
