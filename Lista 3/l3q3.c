#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibb()
{
  int a,b,aux,i,n;
 
  a=0;
  b=1;
 
  printf("Digite um numero: ");
  
  scanf("%d", &n);
  printf("Serie de Fibonacci:\n");
  printf("%d\n", b);
 
  for(i = 0; i < n; i++)
  {
    aux=a+b;
    a=b;
    b=aux;
 	printf("%d\n",aux);
  };
}

int main(int argc, char *argv[]) {
	fibb();
	return 0;
}


