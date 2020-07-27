#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "\n Digite um numero: ";
	std::cin >> Num1;
	std::cout << "\n Digite um numero: ";
	std::cin >> Num2;
	std::cout << "Qual operacao deseja efetuar? \n+ Adicao \n- Subtracao \n* Multiplicacao \n/ Divisao?";
	std::cout << "\n Digite sua opcao: ";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+':
		std::cout << "\n Soma de Num1 + Num 2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\n Subtracao de Num1 - Num 2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\n Multiplicacao de Num1 * Num 2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\n Divisao de Num1 / Num 2 = " << Num1 / Num2;
		break;
	default:
		std::cout << "\n Operacao invalida";
		break;
	}
}