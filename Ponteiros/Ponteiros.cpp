#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int* ptr{ nullptr };
	int Numero { 101 };
	ptr = &Numero;

	*ptr = 103;

	std::cout << "\nEndere�o de memoria de Numero: " << &Numero << "\n";
	std::cout << "\nEndere�o de memoria de ptr: " << &ptr << "\n";
	system("PAUSE");
	return 0;
}