#include <iostream>

int ContadorDeChamadas()
{
	static int NumChamadaDaFuncao = 0;
	NumChamadaDaFuncao++;
	return NumChamadaDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorDeChamadas() << "\n";

	}
	return 0;
}