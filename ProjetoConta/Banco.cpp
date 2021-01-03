#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	{
		setlocale(LC_ALL, "portuguese");

		Conta ContaCliente00;
		Conta ContaCliente01("Bradesco", 1234, 9999, "Fulano", 15500);
		Conta ContaCliente02;

		std::cout << "\nEndereço de memoria objeto Conta Cliente 01: " << &ContaCliente01;
		std::cout << "\nEndereço de memoria objeto Conta Cliente 02: " << &ContaCliente02 << "\n";

		ContaCliente01.Sacar(1500);

		ContaCliente02.SetBanco("Inter");
		ContaCliente02.SetAgencia(0001);
		ContaCliente02.SetNumConta(7777);
		ContaCliente02.SetTitular("Maluco");

		ContaCliente01.Transferir(ContaCliente02, 2000);
		ContaCliente02.Sacar(500);
		ContaCliente02.Sacar(2000);

		
	}

	system("PAUSE");
	return 0;
}