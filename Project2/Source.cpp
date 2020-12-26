#include <iostream>
#include <array>

void MostrarVetor(int array[], int TamVetor);
void AlterarVetor(int array[], int TamVetor);

int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };
	int TamanhoVetor = std::size(Vetor);

	std::cout << "\Tamanho vetor: " << TamanhoVetor<< "\n";

	std::cout << "Vetor original";
	MostrarVetor(Vetor, TamanhoVetor);
	AlterarVetor(Vetor, TamanhoVetor);
	std::cout << "Vetor final";
	MostrarVetor(Vetor, TamanhoVetor);

	system("PAUSE");
	return 0;
}

void MostrarVetor(int array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << array[i] << " -";
	}
	std::cout << "\n\n";
}

void AlterarVetor(int array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		array[i] = array[i] * 2;
	}
}
