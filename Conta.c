#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Conta.h"

char *nomes[] = {
"João", "Pedro"
};

int n = sizeof( nomes ) / sizeof( char* );

void inicializa_conta(Conta *p){
	strcpy( p->nome, nomes[ rand() % n ] ) ;
	p->numero = rand() % 100;
	p->saldo = rand() % 10000 / 100.00;
}

