#include <iostream>

int main()
{
	int Number01, Number02,Sum;
	std::cout << "Please type the first number: " << "\n";
	std::cin >> Number01;
	std::cout << "The variable Number one is equal to: " << Number01 << std::endl;
	std::cout << "Please enter the second number: " << "\n";
	std::cin >> Number02;
	std::cout << "The value of the second number is :" << Number02 << std::endl;
	Sum = Number01 + Number02;
	std::cout << "The sum of the numbers are equal to: " << Sum << std::endl;
	system("PAUSE");
	return 0;
}