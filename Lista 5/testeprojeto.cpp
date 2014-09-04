#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"



Processo* topoPilha;
int contadorProcessos = 0, DEBUG = 0;

int main(int argc, char **argv)
{
if (argc == 2) {
DEBUG = 1;
}

Processo* novoProcesso;

inicializarPilha(topoPilha);

novoProcesso = inicializarProcesso(145);
inserirProcessoNoTopo(topoPilha, novoProcesso);
novoProcesso = inicializarProcesso(1345);
inserirProcessoNoTopo(topoPilha, novoProcesso);

imprimirPilha(topoPilha);

return 0;
}

void imprimirPilha(Processo* topoPilha)
{
if (DEBUG == 1) {
//printf();
}

if (!topoPilha) {
printf("A pilha de processos está vazia.\n");
}

Processo* processoAtual = topoPilha;

while (processoAtual) {
imprimirProcesso(processoAtual);
processoAtual = processoAtual->processoAnterior;
}
}

void imprimirProcesso(Processo* processo)
{
printf("Código do processo: %d\n", processo->ID);
printf("Valor do cheque: %d\n", processo->valorCheque);
}

// Inicializa a pilha de processos apontando o ponteiro
// do topo da pilha para NULL (nenhum processo na pilha).
void inicializarPilha(Processo* topoPilha)
{
printf("Inicializando a pilha de processos...\n");
topoPilha = NULL;
}

Processo* inicializarProcesso(int valorCheque)
{
// Aloca memória para o processo.
Processo* processo = (Processo*) malloc(sizeof(Processo));

// Verifica se a memória foi alocada para o processo.
if (!processo) {
printf("Não foi possível alocar memória para o processo.\n");
return NULL;
} else {
// Preenche os campos do processo.
processo->ID = ++contadorProcessos;
processo->valorCheque = valorCheque;
// Ao ser criado o processo ainda não está na pilha,
// por isso o ponteiro do processo anterior é NULL.
processo->processoAnterior = NULL;
return processo;
}
}

void inserirProcessoNoTopo(Processo** topoPilha, Processo* novoProcesso)
{
printf("Inserindo processo na pilha...\n");

if (*topoPilha == NULL) {
topoPilha = novoProcesso;
} else {
novoProcesso->processoAnterior = topoPilha;
topoPilha = novoProcesso;
}

if (DEBUG == 1) {
printf("inserirProcessoNoTopo(topoPilha, novoProcesso)\n");
printf("novoProcesso: %p\n", novoProcesso);
printf("topoPilha: %p\n", topoPilha);
}
}



