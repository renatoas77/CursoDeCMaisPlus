#include <iostream>

void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();

int VarGlobal{ 10 };

int main()
{
	int VarMain{ 00 };
	Funcao01();
	
	system("PAUSE");
	return 0;
}

void Funcao01()
{
	int var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "\nChamando Funcao01\n";
	std::cout << "\nEndereco de var01: " << &var01 << "\n";
	VarEstatica++;
	std::cout << "\nValor VarEstatica: " << VarEstatica << std::endl;
	Funcao02();
}

void Funcao02()
{
	int var02{ 02 };
	std::cout << "\nChamando Funcao02\n";
	std::cout << "\nEndereco de var02: " << &var02 << "\n";
	Funcao03();
}

void Funcao03()
{
	int var03{ 03 };
	std::cout << "\nChamando Funcao03\n";
	std::cout << "\nEndereco de var03: " << &var03 << "\n";
	Funcao04();
}

void Funcao04()
{
	int var04{ 04 };
	std::cout << "\nChamando Funcao04\n";
	std::cout << "\nEndereco de var04: " << &var04 << "\n";
}
