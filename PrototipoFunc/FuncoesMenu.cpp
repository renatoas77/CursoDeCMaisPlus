#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"


void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

		do
		{
			std::cout << "\n****Tickets Cinema****" << std::endl;
			std::cout << "\n1-Meia Entrada\n";
			std::cout << "\n2-Inteira\n";
			std::cout << "\n3-Sair\n";
		} while (ProcessarEscolha(RetornarEscolha()) != 3);
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	return escolha;
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{

	case 1: std::cout << "\nMeia entrada comprada\n";
		break;
	case 2: std::cout << "\nEntrada inteira comprada\n";
		break;
	case 3: std::cout << "\nSaindo do menu\n";
		break;
	default: std::cout << "\nOpçao invalida\n";
		break;
	}
	return TipoEscolha;
}