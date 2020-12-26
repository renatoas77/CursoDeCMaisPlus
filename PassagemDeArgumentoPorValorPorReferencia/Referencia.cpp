#include <iostream>

void TrocaDeNumeros(int *Num1, int *Num2)
{
	int temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = temp;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "Digite o primeiro  numero: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes das trocas" << "\n";
	std::cout << "\nValor de numero 1: " << Numero1 << "\n";
	std::cout << "\nValor de numero 2: " << Numero2 << "\n";
	std::cout << "\nValore dos numeros depois da troca:\n";
	TrocaDeNumeros(&Numero1, &Numero2);
	std::cout << "\nValor de numero 1: " << Numero1 << "\n";
	std::cout << "\nValor de numero 2: " << Numero2 << "\n";
	system("PAUSE");
	return 0;
}