#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Fin, Sum = 0;
	std::cout << "deseja contar at� quanto? ";
	std::cin >> Fin;

	for (int i = 0; i <= Fin; i++)
	{
		std::cout << i << "\n";
		Sum = Sum + i;
	}
	std::cout << "A soma de todos numeros exibidos � " << Sum << std::endl;
}