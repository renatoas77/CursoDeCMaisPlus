#include <iostream>

class Base
{
public:
	void SolicitarNumeros()
	{
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		Mostrarresultado(Num1, Num2);
	}

private:
	float Num1, Num2;
	float Soma(float Num1, float Num2)
	{
		return (Num1 + Num2);
	}

	void Mostrarresultado(float Num1, float Num2)
	{
		std::cout << "Soma de " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}
};

class Derivada : public Base {};

int main()
{
	Derivada Obj;
	Obj.SolicitarNumeros();
	system("PAUSE");
	return 0;
}