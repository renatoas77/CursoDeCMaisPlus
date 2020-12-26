#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Vetor[]{ 1, 23, -78, 900, 234 };
	int* ptr;

	ptr = Vetor;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereco: " << (ptr + i) << " Valor: " << *(ptr + i) << "\n";
	}
	std::cout << "O endereço de ptr é: " << ptr << "\n";


	for (int i = 0; i < 5; i++)
	{
		std::cout << "O endereço de ptr é: " << ptr << " e seu valor é: " << *ptr << "\n";
		ptr++;
	}

	ptr--;

	std::cout << "ptr aponta para o seguinte valor: " << *ptr << "\n";

	ptr = Vetor;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor [" << i << "] = " << ptr[i] << "\n";
	}

	system("PAUSE");
	return 0;
}