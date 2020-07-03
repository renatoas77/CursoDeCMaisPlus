#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "******** INICIO DO JOGO	*********" << std::endl;
	std::cout << "vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da variavel NumVidas: " << sizeof(NumVidas) << " bytes" << "\n";
	std::cout << "tamanho da variavel Pontuacao: " << sizeof(Pontuacao) << " bytes" << "\n";
	std::cout << "***********************************" << std::endl;

	std::cout << "***********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Player One Score: " << Pontuacao << std::endl;
	std::cout << "Player One Life: " << NumVidas << std::endl;

	system("PAUSE");
	return 0;


}