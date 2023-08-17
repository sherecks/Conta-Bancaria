#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"


int main(int argc, char *argv[]) {
	Conta c1;
	
	inicializa_conta(&c1);
	
	printf("Nome: %s, Numero: %i, Saldo: %.2f\n", c1.nome, c1.numero, c1.saldo);
	return 0;
}
