#include <iostream>

int main()
{
	int ini = 0, fin;
	std::cout << "deseja contar at� qual numero: ";
	std::cin >> fin;
	while (ini <= fin)
	{
		std::cout << ini << std::endl;
		ini++;
	}
}