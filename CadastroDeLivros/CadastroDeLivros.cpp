#include <iostream>
#include <string>

struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	Livro livro;
	
	std::cout << "***Cadsastro de livro***\n";
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.ID;
	std::cout << "\nDigite o Titulo do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);

	std::cout << "\nDigite o Autor do livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "\nDigite a Editora do livro: ";
	std::getline(std::cin, livro.Editora);

	std::cout << "ID: " << livro.ID << "\n";
	std::cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n";



	system("PAUSE");
	return 0;
}

