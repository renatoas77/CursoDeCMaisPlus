#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double numero;
	bool ResultadoLogico1, ResultadoLogico2;
	std::cout << "digite um numero: ";
	std::cin >> numero;
	std::cout << "True = 1 e False = 0" << "\n";
	ResultadoLogico1 = ((numero == 100) || (numero > 200)) && (numero < 1000);
	std::cout << "O resultado logico da expressão ((numero ==100) || (numero > 200)) && (numero < 1000); é: " << ResultadoLogico1 << std::endl;
	ResultadoLogico2 = ((numero > 100) && (numero != 0));
	std::cout << "O resultado logico da expressão ((numero > 100) && (numero != 0)); é: " << ResultadoLogico2 << std::endl;
	system("PAUSE");
	return 0;
}