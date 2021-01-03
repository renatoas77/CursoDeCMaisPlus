#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "******Acesso ao sistema concedido ******"<< std::endl;
}

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::SetNome(std::string NovoNome)
{
	Nome = NovoNome;
}

void Pessoa::SetCPF(int NovoCPF)
{
	CPF = NovoCPF;
}

void Pessoa::SetMatricula(int NovaMatricula)
{
	Matricula = NovaMatricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "\n**********Dados**********\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";
}