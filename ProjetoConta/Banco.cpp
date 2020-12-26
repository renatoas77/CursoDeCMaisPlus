#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "portuguese");
	Conta ContaCliente01;
	Conta ContaCliente02;

	std::cout << "\nEndereço de memoria objeto Conta Cliente 01: " << &ContaCliente01;
	std::cout << "\nEndereço de memoria objeto Conta Cliente 02: " << &ContaCliente02<< "\n";

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(15500);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Inter");
	ContaCliente02.SetAgencia(0001);
	ContaCliente02.SetNumConta(7777);
	ContaCliente02.SetTitular("Maluco");
	
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(2000);

	return 0;
}