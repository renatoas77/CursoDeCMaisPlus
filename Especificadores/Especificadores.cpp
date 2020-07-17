#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char caractere{ 'c' };
	std::string Texto{ "Texto da string " };
	std::printf("Valor Inteiro = %d - Real = %.2f - Caractere = %c ", NumeroInteiro, NumeroReal, caractere);
	system("PAUSE");
	return 0;
}