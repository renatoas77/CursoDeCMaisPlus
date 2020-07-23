#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char caractere{ 'c' };
	std::string Texto{ "Vou aprender C++ e aprender o lado sombrio da força " };
	std::printf("Valor Inteiro = %d - Real = %.2f - Caractere = %c - Texto = %s ", NumeroInteiro, NumeroReal, caractere, Texto.c_str());
	std::cout << "Texto da string" << Texto << std::endl;

	std::printf("O valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", caractere, caractere);
	system("PAUSE");
	return 0;
}