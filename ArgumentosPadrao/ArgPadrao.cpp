#include <iostream>

void Coordenadas(int x = 5, int y = 3, int z = 2);

int main()
{
	Coordenadas();
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << "-" << y << "-" << z << ")" << std::endl;
}