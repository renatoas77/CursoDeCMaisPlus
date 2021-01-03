#include "Conta.h"
#include <iostream>
#include <string>;

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo atual é: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		Saldo -= Valor;
		std::cout << "\nSaque de R$" << Valor << " efetuado com sucesso\n";
		std::cout << "Seu saldo atual é: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	std::cout << "\nDeposito de R$" << Valor << " efetuado com sucesso!\n";
}

void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente\n";
	}
	else
	{
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << GetTitular() << "\n";
		std::cout << "Banco: " << GetBanco() << "\n";
		std::cout << "Agencia: " << GetAgencia() << "\n";
		std::cout << "Conta: " << GetNumConta() << "\n";
		std::cout << "Tranferencia realizada com sucess!\n";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nThis contem dentro o endereco: " << this << "\n"; 
}

void Conta::SetBanco(std::string Banco)
{
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
	std::cout << "\Construtor Objeto Endereco: " << this << "executado!\n";

}

Conta::Conta()
{
	Banco = " ";
	Agencia = 0;
	NumConta = 0;
	Titular = " ";
	Saldo = 0.0;
	std::cout << "\Construtor Objeto Endereco: " << this << "executado!\n";

}

Conta::~Conta()
{
	std::cout << "\nDestrutor Objeto Endereco: " << this << "executado!\n";
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}