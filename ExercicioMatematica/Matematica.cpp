#include<iostream>
#include <math.h>
#include <tchar.h>
#include "Matematica.h"

void Entrada()
{
	double num1, num2;
	std::cout << "Digite o primeiro numero" << std::endl;
	std::cin >> num1;
	std::cout << "Digite o segundo numero" << std::endl;
	std::cin >> num2;
	Calculos(num1, num2);
}

void Calculos(double num1, double num2)
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	std::cout << "A soma dos dois numero é: " << num1 + num2 << std::endl;
	std::cout << "A subtração dos dois numero é: " << num1 - num2 << std::endl;
	std::cout << "A multiplicação dos dois numero é: " << num1 * num2 << std::endl;
	std::cout << "A divisão dos dois numero é: " << num1 / num2 << std::endl;
	std::cout << "A potencia dos dois numero é: " << pow(num1,num2) << std::endl;
	std::cout << "A raiz do numero um é: " << sqrt(num1) << std::endl;
	std::cout << "A raiz do numero dois é: " << sqrt(num2) << std::endl;
}