#include <iostream>

int main()
{
	int ini = 0, fin;
	std::cout << "deseja contar até qual numero: ";
	std::cin >> fin;
	while (ini <= fin)
	{
		std::cout << ini << std::endl;
		ini++;
	}
}