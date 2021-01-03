#include <iostream>

struct Ponto3D
{
	float X{ 0 }, Y{ 0 }, Z{ 0 };

	void DesenharPonto3D()
	{
		std::cout << "\nPonto X: " << X << " Ponto Y: " << Y << " Ponto Z: " << Z<<"\n";
	}

	void AlterarCoordenadas(float X, float Y, float Z)
	{
		this->X = X;
		this->Y = Y;
		this->Z = Z;
	}

	void DesenharPonto3D(Ponto3D Pontos)
	{
		std::cout << "\nPonto X: " << Pontos.X << " Ponto Y: " << Pontos.Y << " Ponto Z: " << Pontos.Z << "\n";
	}

	void AlterarCoordenadas(Ponto3D Pontos)
	{
		X = Pontos.X;
		Y = Pontos.Y;
		Z = Pontos.Z;
	}
};

int main()
{
	setlocale(LC_ALL, "portuguese");

	Ponto3D Ponto1;

	Ponto3D* Ponto2 = new Ponto3D;

	Ponto3D PontoA;

	PontoA.X = 3;
	PontoA.X = 4;
	PontoA.X = 5;

	Ponto1.DesenharPonto3D();
	Ponto2->DesenharPonto3D();

	Ponto1.AlterarCoordenadas(3.4, 4.8, 12.9);
	Ponto2->AlterarCoordenadas(15.6, 7.2, 4.3);

	Ponto1.DesenharPonto3D();
	Ponto2->DesenharPonto3D();

	PontoA.DesenharPonto3D();
	PontoA.AlterarCoordenadas(Ponto1);
	PontoA.DesenharPonto3D();

	system("PAUSE");
	return 0;
}