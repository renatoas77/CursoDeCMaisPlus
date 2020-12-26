#include <iostream>
#include <string>

int main()
{
	float Nota[] { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f }, media{ 0 };

	std::string NomeAluno;

	std::cout << "\nDigite o nome do aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i<5; i++)
	{
		std::cout << "\nDigite a " << i+1 << " nota:";
		std::cin >> Nota[i];
		media += Nota[i];
	}

	std::cout << "A media das notas do aluno e: " << media/5 << "\n";
 
	system("PAUSE");
	return 0;
}