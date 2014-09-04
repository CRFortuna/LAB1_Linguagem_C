#include <stdio.h>
#include <stdlib.h>

/* calcula salario */

int main(int argc, char *argv[]) {
float horaT, horaM;
float bruto, liquido,inss,sind,ir;

printf("Digite quando vale sua hora de trabalho, em seguinda quantas horas vc trabalha no mes");
scanf("%f",&horaT);
scanf("%f",&horaM);
bruto=horaT*horaM;
ir=(bruto*11)/100;
inss=(bruto*18)/100;
sind=(bruto*5)/100;
liquido=bruto-ir-inss-sind;

printf("+Bruto R$%.2f \n-%.2f (11%)IR \n-%.2f (8%)INSS \n-%.2f(sind) \n-------------------------\n %.2f LIQUIDO",bruto,ir,inss,sind,liquido);
	return 0;
}

