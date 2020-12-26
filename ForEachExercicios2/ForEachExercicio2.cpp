#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");
	double Nota[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	double Total{ 0 };

	for (auto Notas : Nota)
	{
		Total += Notas;
	}

	std::cout << "A média das notas do aluno é: " << std::setprecision(4) << Total / (sizeof(Nota) / sizeof(double));
}