#include <iostream>

int main()
{
	int Inteiro = 7;
	float Flutuante = 7.77;
	double PrecisaoDupla = 77.7777;
	char Caractere = 'F';
	
	std::cout << "O valor de Inteiro e: " << Inteiro << "\n";
	std::cout << "O tamanho de Inteiro e: " << sizeof(Inteiro) << " bytes" << "\n";
	std::cout << "O endereco de Inteiro e: " << &Inteiro << "\n";
	std::cout << "" << std::endl;
	std::cout << "O valor de Flutuante e: " << Flutuante << std::endl;
	std::cout << "O tamanho de Flutuante e: " << sizeof(Flutuante) << " bytes" << std::endl;
	std::cout << "O endereco de Flutuante e: " << &Flutuante << std::endl;
	std::cout << "" << std::endl;
	std::cout << "O valor de PrecisaoDupla e: " << PrecisaoDupla << "\n";
	std::cout << "O tamanho de PrecisaoDupla e: " << sizeof(PrecisaoDupla) << " bytes" << "\n";
	std::cout << "O endereco de PrecisaoDupla e: " << &PrecisaoDupla << "\n";
	std::cout << "" << std::endl;
	std::cout << "O valor de Caracteree: " << Caractere << std::endl;
	std::cout << "O tamanho de Caractere:  " << sizeof(Caractere) << " bytes" << std::endl;
	std::cout << "O endereco de Caractere:  " << (void*)Caractere << std::endl;

	system("pause");
	return 0;
}