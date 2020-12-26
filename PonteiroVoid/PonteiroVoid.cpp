#include <iostream>

int main()
{
	int numero = 77;
	char Letra = 'R';
	void* ptrG = &numero;

	std::cout << "Counteudo de numero via ponteiro generico: " << *(int*)ptrG << "\n";

	ptrG = &Letra;

	std::cout << "Counteudo de letra via ponteiro generico: " << *(char*)ptrG << "\n";

}