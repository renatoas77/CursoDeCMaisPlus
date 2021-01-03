#include <iostream>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;

};

struct Pessoa
{
	std::string Nome;
	Data Nascimento;
	Endereco Residencial;
};

void ExibirDados(Pessoa Gente);

int main()
{
	setlocale(LC_ALL, "portuguese");

	Pessoa Pessoa[2];

	Pessoa[0].Nome = "Renato";
	Pessoa[0].Nascimento.Dia = 16;
	Pessoa[0].Nascimento.Mes = 5;
	Pessoa[0].Nascimento.Ano = 1993;
	Pessoa[0].Residencial.Rua = "Estudantes";
	Pessoa[0].Residencial.Cidade = "Sao Paulo";
	Pessoa[0].Residencial.Estado = "SP";
	Pessoa[0].Residencial.Pais = "Brazil";

	Pessoa[1].Nome = "Heloisa";
	Pessoa[1].Nascimento.Dia = 10;
	Pessoa[1].Nascimento.Mes = 5;
	Pessoa[1].Nascimento.Ano = 1991;
	Pessoa[1].Residencial.Rua = "Lyons";
	Pessoa[1].Residencial.Cidade = "Cotia";
	Pessoa[1].Residencial.Estado = "SP";
	Pessoa[1].Residencial.Pais = "Brasil";

	ExibirDados(Pessoa[0]);
	ExibirDados(Pessoa[1]);

	system("PAUSE");
	return 0;
}

void ExibirDados(Pessoa Gente)
{
	std::cout << "\n*****************Dados*****************\n";
	std::cout << "Nome: " << Gente.Nome << "\n";
	std::cout << "Data de nascimento: " << Gente.Nascimento.Dia << "\\" << Gente.Nascimento.Mes << "\\" << Gente.Nascimento.Ano << "\n";
	std::cout << "Endereco\n";
	std::cout << "Rua: " << Gente.Residencial.Rua << "\n";
	std::cout << "Cidade: " << Gente.Residencial.Cidade << "\n";
	std::cout << "Estado: " << Gente.Residencial.Estado << "\n";
	std::cout << "Pais: " << Gente.Residencial.Pais << "\n";
	std::cout << "***************************************\n";
}
