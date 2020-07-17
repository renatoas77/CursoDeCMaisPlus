#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	double n1, n2, n3, M;
	std::cout << "Enter the first number: " << "\n";
	std::cin >> n1;
	std::cout << "Enter the second number: " << "\n";
	std::cin >> n2;
	std::cout << "Enter the third number: " << "\n";
	std::cin >> n3;
	M = (n1 + n2 + n3) / 3;
	std::cout << "The numbers typed are: " << n1 << " " << n2 << " " << n3 << std::endl;
	std::cout << "The number average is: " << M << std::endl;
	system("PAUSE");
	return 0;
}