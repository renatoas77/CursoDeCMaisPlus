#include <iostream>

int main()
{
	double MaiorNumero,Num1,Num2;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num2;
	
	MaiorNumero = (Num1 > Num2) ? Num1 : Num2;
	
	std::cout << "Maio numero digitado: " << MaiorNumero << "\n";

	(Num1 > Num2) ? std::cout << "Numero 1 maior que numero 2 \n" : std::cout << "Numero 2 maior que numero 1 \n";

	system("PAUSE");
}