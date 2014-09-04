#include <stdio.h>
#include <stdlib.h>

/* A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total: O primeiro ganhador recebera 46%; O segundo recebera
32%; O terceiro recebera o restante; Calcule e imprima a quantia ganha por cada um
dos ganhadores. */

int main(int argc, char *argv[]) {
float p=780000.00;

printf("O primeiro lugar ganhou R$ %.2f \nO segundo lugar ganhou R$ %2.f \nO terciro lugar ganhou R$ %.2f",(p*46)/100,(p*32)/100,(p*22)/100);


	return 0;
}
