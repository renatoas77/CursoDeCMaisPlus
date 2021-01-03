#include <iostream>
#include "Aluno.h"
#include "Bibliotecaria.h"
#include "Professor.h"


int main()
{
	Professor Marcos("Marcos",444888992,5165465,"Udemy");
	Aluno Renato("Santos",408119,2054395,"ADS");
	Bibliotecaria ObiWan("Kenoni",6554650,54610);

	Marcos.MostrarDados();
	Renato.MostrarDados();
	ObiWan.MostrarDados();

	
	system("PAUSE");
	return 0;
}