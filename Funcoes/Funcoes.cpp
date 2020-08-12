#include <iostream>
#include <tchar.h>

int SomaNumeros(int NumeroUm, int NumeroDois)
{
	return NumeroUm + NumeroDois;
}

void mensagem()
{
	std::cout << "Chegamos em venus... Tudo sopimpa...\n";
	std::cout << "Chegamos em venus... Tudo sopimpa...\n";
	return;
}

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero,NumSomado,Resultado;
	mensagem();
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumSomado;
	std::cout << "A soma dos numeros é: " << SomaNumeros(Numero, NumSomado);
	Resultado = SomaNumeros(299, 498);
	std::cout << "\nO resultado da soma de 299 + 498 é: " << Resultado;

	Resultado = SomaNumeros(Numero, (SomaNumeros(Numero, NumSomado)));
	
	std::cout << "\n O resultado das somas é: " << Resultado;
}