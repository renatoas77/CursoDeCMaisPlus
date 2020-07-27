#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Fin, Sum = 0;
	std::cout << "deseja contar até quanto? ";
	std::cin >> Fin;

	for (int i = 0; i <= Fin; i++)
	{
		std::cout << i << "\n";
		Sum = Sum + i;
	}
	std::cout << "A soma de todos numeros exibidos é " << Sum << std::endl;
}