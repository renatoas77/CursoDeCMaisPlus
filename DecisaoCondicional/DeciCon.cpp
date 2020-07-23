#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	bool bFezSol, bCarroPronto, bSalarioDepositado, bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "digite a senha de acesso: " << std::endl;
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n AcessoPermitido!" << "\n";
		bAcesso = true;
		system("PAUSE");
	}
	else
	{
		std::cout << "\n Acesso negado" << std::endl;
		system("PAUSE");
		exit(0);
	}

	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;

	if (bAcesso)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "Vai dar praia!" << std::endl;
		}
		else if (!bSalarioDepositado)
		{
			std::cout << "Não vai dar praia, o salario não foi depositado..." << std::endl;
		}
	}
	system("PAUSE");
}