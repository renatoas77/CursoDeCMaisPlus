#include <iostream>
#include <iomanip>

struct Aluno
{
	int Matricula;
	std::string	Nome;
	std::string Curso;
	int	Semestre;
	double	Mensalidade;
	void MudarCadastro(int Matricula, std::string Nome, std::string Curso, int Semestre, double	Mensalidade);

};

void MostrarDados(struct Aluno Dados);
void AlterarDados(struct Aluno& Dados);
void MostrarDados(Aluno* Dados);
void AlterarDados(Aluno* Dados);


int main()
{
	Aluno Aluno01 = { 111111,"Renato","ADS",3,50.25 };
	Aluno Aluno03;
	Aluno* Aluno02 = new Aluno;

	std::cout << "\nAntes de alterar os dados: \n";
	AlterarDados(&Aluno03);
	MostrarDados(&Aluno03);
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "\nDepois de alterar os dados: \n";
	MostrarDados(Aluno01);
	
	AlterarDados(Aluno02);
	std::cout << "\nDepois de alterar os dados: \n";
	MostrarDados(Aluno02);

	system("PAUSE");
	return 0;
}

void MostrarDados(Aluno Dados)
{
	std::cout << "********************DADOS DO ALUNO********************\n";
	std::cout << "\t Nome: " << Dados.Nome << "\n";
	std::cout << "\t Curso : " << Dados.Curso << "\n";
	std::cout << "\t Semestre: " << Dados.Semestre << "\n";
	std::cout << "\t Matricula: " << Dados.Matricula << "\n";
	std::cout << "\t Mensalidade: R$" << std::fixed << std::setprecision(2) << Dados.Mensalidade << "\n";
	std::cout << "******************************************************\n";
}

void AlterarDados(Aluno& Dados)
{
	Dados.Nome = "Fulano";
	Dados.Curso = "TI";
	Dados.Semestre = 4;
	Dados.Matricula = 222222;
	Dados.Mensalidade = 999.99;
}

void MostrarDados(Aluno* Dados)
{
	std::cout << "********************DADOS DO ALUNO********************\n";
	std::cout << "\t Nome: " << Dados->Nome << "\n";
	std::cout << "\t Curso : " << Dados->Curso << "\n";
	std::cout << "\t Semestre: " << Dados->Semestre << "\n";
	std::cout << "\t Matricula: " << Dados->Matricula << "\n";
	std::cout << "\t Mensalidade: R$" << std::fixed << std::setprecision(2) << Dados->Mensalidade << "\n";
	std::cout << "******************************************************\n";
}

void AlterarDados(Aluno* Dados)
{
	Dados->Nome ="Creisso";
	Dados->Curso= "HTML";
	Dados->Semestre= 9;
	Dados->Matricula= 9029;
	Dados->Mensalidade= 2.20;
}

void Aluno::MudarCadastro(int Matricula, std::string Nome, std::string Curso, int Semestre, double Mensalidade)
{
	this->Matricula = Matricula;
	this->Nome = Nome;
	this->Curso = Curso;
	this->Semestre = Semestre;
	this->Mensalidade = Mensalidade;
}
