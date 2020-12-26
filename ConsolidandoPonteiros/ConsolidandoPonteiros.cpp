#include <iostream>

int main()
{
	int numero{ 40990 };
	int* ptr = &numero;
	int* ptr2 = ptr;
	std::cout << "Endereço de ptr: " << ptr << std::endl;
	std::cout << "Endereço de ptr2: " << ptr2 << std::endl;
	std::cout << "Endereço de ptr na RAM: " << &ptr << std::endl;
	std::cout << "Endereço de ptr2: na RAM: " << &ptr2 << std::endl;
	*ptr2 = *ptr + 10; 
	std::cout << "Valor de numero agora: " << numero << std::endl;
	std::cout << numero << std::endl;
	return 0;

}