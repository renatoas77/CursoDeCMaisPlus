#include <iostream>
#include <array>

void Exibir(int Arranjo[], int limite);

int main()
{
	int Vetor []{ 1,2,3,4,5,6,7 };

	int limite = std::size(Vetor);

	Exibir(Vetor,limite);

	system("PAUSE");
	return 0;
}

void Exibir(int Arranjo[], int limite)
{
	for (int i = 0; i < limite; i++)
	{
		std::cout << "-" << Arranjo[i] << "-";
	}
}
