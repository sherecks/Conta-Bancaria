//Conta.h

typedef struct {
	char nome[20];
	int numero;
	float saldo;
} Conta;

void inicializa_conta(Conta *p);
