#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	
	time_t HoraAtual = time(0);

	tm* MinhaHora = localtime(&HoraAtual);
	std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	std::cout << "\nMes: " << 1 + MinhaHora->tm_mon;
	std::cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n";
	system("DATE");
	system("TIME");
	system("PAUSE");


	system("PAUSE");
	return 0;
}