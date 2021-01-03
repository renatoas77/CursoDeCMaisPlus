#include <iostream>

typedef int inteiro;
typedef char caractere;
typedef double real;
typedef std::string frase;

int main()
{
	inteiro Numero{10};
	caractere Letra{'H'};
	real Pi{ 3.14 };
	frase Sentenca{"Mim se lola"};

	std::cout << "Numero: " << Numero;
	std::cout << "Letra: " << Letra;
	std::cout << "Valor de pi: " << Pi;
	std::cout << "Frase: " << Sentenca;

	system("PAUSE");
	return 0;
}