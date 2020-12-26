#include <iostream>

class Casa
{
private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };
public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void TrocaNumQuarto(int Quarto);
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	Casa CasaDePraia;
	int Numero;
	CasaDePraia.MostrarTamanho();
	std::cout << "Numero de quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos() << "\n";
	std::cout << "Tem suite: " << CasaDePraia.TemSuite() ? std::cout << " Sim " : std::cout << " Não" << std::endl;
	std::cout << "\nDigite o numero de quartos: ";
	std::cin >> Numero;
	CasaDePraia.TrocaNumQuarto(Numero);
	std::cout << "O numero de quartos atualizado é: " << CasaDePraia.ObtenhaNumeroDeQuartos() <<"\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "O tamanho é: " << Tamanho << std::endl;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return true;
}

void Casa::TrocaNumQuarto(int Quarto)
{
	if ((Quarto >= 0) && (Quarto < 7))
	{
		NumQuartos = Quarto;
	}
	else
	{
		std::cout << "\nQuantidade invalida\n";
	}
}
