#include "Professor.h"

void Professor::EfetuarChamada()
{
	std::cout << "Chamada efetudada com sucesso\n";
}

void Professor::EntregarPauta()
{
	std::cout << "Pauta entregue!\n";
}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string NovoDepartamento)
{
	Departamento = NovoDepartamento;
}

void Professor::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << "\n";
}
