#include <iostream>
#include <string>

struct Livros
{
	int ID{ 0 };
	std::string Titulo{ " " };
	std::string	Autor{ " " };
	std::string	Editora{ " " };
	int	Ano{ 0 };

	void Cadastro(int ID, std::string Titulo, std::string Autor, std::string Editora, int Ano)
	{
		this->ID = ID;
		this->Titulo = Titulo;
		this->Autor = Autor;
		this->Editora = Editora;
		this->Ano = Ano;
	}

	void MostrarDados()
	{
		std::cout << "*****Dados dos livros*****" << "\n";
		std::cout << "\nID: " << ID << "\n";
		std::cout << "\nTitulo: " << Titulo << "\n";
		std::cout << "\nAutor: " << Autor << "\n";
		std::cout << "\nEditora: " << Editora << "\n";
		std::cout << "\nAno: " << Ano << "\n";
		std::cout << "*************************" << "\n";

	}
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	Livros livro[5];

	for (int i = 0; i < 5; i++)
	{
		int ID{ 0 };
		std::string Titulo{ " " };
		std::string	Autor{ " " };
		std::string	Editora{ " " };
		int	Ano{ 0 };

		std::cout << "\nDigite a ID do " << i+1 << "º livro: " << "\n";
		std::cin >> ID;

		std::cout << "\nDigite o titulo do " << i+1 << "º livro: " << "\n";
		std::cin.ignore();
		std::getline(std::cin, Titulo);

		std::cout << "\nDigite o autor do " << i+1 << "º livro: " << "\n";
		std::getline(std::cin , Autor);

		std::cout << "\nDigite a editora do " << i+1 << "º livro: " << "\n";
		std::getline(std::cin , Editora);

		std::cout << "\nDigite o ano do " << i+1 << "º livro: " << "\n";
		std::cin >> Ano;

		livro[i].Cadastro(ID, Titulo, Autor, Editora, Ano);
		system("CLS");
	}

	for (int i = 0; i < 5; i++)
	{
		livro[i].MostrarDados();
	}
}