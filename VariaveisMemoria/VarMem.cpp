#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho variavel Numero: " << sizeof(Numero) << std::endl;
	std::cout << "\n Tamanho variavel Salario: " << sizeof(Salario) << std::endl;
	std::cout << "\n Endereço de variavel da memoria Numero: " << &Numero << "\n";
	std::cout << "\n Endereço de variavel da memoria Salario: " << &Salario << "\n";
	system("PAUSE");
	return 0;
}