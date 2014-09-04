#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int x1,x2;
float x3;

printf("Digite 2 numeros inteiros: ");
scanf("%d",&x1);
scanf("%d",&x2);

printf("Digite um numero real: \n");
scanf("%f",&x3);
	
printf("%d\n",(x1*2)*(x2/2));
printf("%.2f\n",(x1*3)+x3);
printf("%.2f\n",(x3*x3)*x3);

return 0;
}
