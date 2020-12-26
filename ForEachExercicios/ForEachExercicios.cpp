#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Velocidade[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7};
	float Media{ 0 }, Total{ 0 };

	for (auto Velo : Velocidade)
	{
		Total += Velo;
	}
	Media = Total / (sizeof(Velocidade) / sizeof(float));
	std::cout << "A velocidade média é de " << std::setprecision(4) << Media << " Km/h" << "\n";
}