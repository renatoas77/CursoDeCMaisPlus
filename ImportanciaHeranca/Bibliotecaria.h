#pragma once
#include "Pessoa.h"
class Bibliotecaria :
	public Pessoa
{
public: 
	Bibliotecaria() {}
	Bibliotecaria(std::string NovoNome, int NovoCPF, int NovaMatricula)
		: Pessoa(NovoNome, NovoCPF, NovaMatricula){}

	void CadastrarLivros();
	void MostrarDados();
};

