#pragma once
#include <iostream>

class Conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{ 0.0 };
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);
};