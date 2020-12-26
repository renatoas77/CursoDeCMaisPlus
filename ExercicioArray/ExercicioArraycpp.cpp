#include <iostream>

void DuplicaVetor(int *Array, int Tam); //Função que não retorna nada
int *InverteVetor(int *Array, int Tam); //Função que retorna um ponteiro
void MostraVetor(int *Array, int Tam); //Função que não retorna nada

int main()
{
	int numeros[]{1,2,3,4,5,6,7,8,9,10};
	int tam = sizeof(numeros) / sizeof(int);
	MostraVetor(numeros,tam);
	DuplicaVetor(numeros, tam);
	MostraVetor(numeros, tam);
	MostraVetor(InverteVetor(numeros, tam), tam);
	system("PAUSE");
	return 0;
}

void DuplicaVetor(int* Array, int Tam)
{
	for (int i = 0; i < Tam; i++)
	{
		Array[i] *= 2;
	}
}

int* InverteVetor(int* Array, int Tam)
{
	int j = 0;
	static int ArrayInvertido[10];
	for (int i = Tam - 1; i >= 0; i--)
	{
		ArrayInvertido[j] = Array[i];
		j++;
	}
	return ArrayInvertido;
}

void MostraVetor(int *Array, int Tam)
{
	std::cout << "[ ";
	for (int i = 0; i < Tam; i++)
	{
		std::cout << Array[i] << " ";
	}
	std::cout << "] \n\n";
}
