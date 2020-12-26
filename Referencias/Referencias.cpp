#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL,_T ("portuguese"));
	int Numero{ 1024 };
	char Letra{ 'A' };
	int& Ref = Numero;
	std::cout << "\nValor de numero usado em Ref: " << Ref << std::endl;
	std::cout << "\nValor endereço de numero: " << &Numero << std::endl;
	std::cout << "\nValor endereço de Ref:  " << &Ref << std::endl;
	int* ptr = &Numero;
	std::cout << "\nValor enreço de ptr:  " << &ptr << std::endl;
	std::cout << "\nValor apontado por ptr:  " << *ptr << std::endl;
	return 0;
}