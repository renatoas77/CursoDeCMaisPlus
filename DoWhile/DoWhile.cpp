#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do
	{
		std::cout << "\n ****Tickets de Cinema****" << std::endl;

		std::cout << "Escolha sua opção: \n";
		std::cout << "1-para meia entrada \n";
		std::cout << "2-para inteira \n";
		std::cout << "3-para sair\n";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\n Meia entrada comprada! \n";
			break;
		case 2: std::cout << "\n Entrada comprada \n";
			break;
		case 3: std::cout << "\n Saindo \n";
			break;
		default: std::cout << "Opcao invalida";

		}

	} while (escolha != 3);
	system("PAUSE");
	return 0;
}