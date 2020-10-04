#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string>
#include "um.h"
using namespace std;

//
// trabalhador
//
trabalhador::trabalhador(const info& infoNome, const info& infoCPF,
	const familia& famiMae, const familia& famiPai)
	:funcionarioNome(infoNome),
	funcionarioCPF(infoCPF),
	mae(famiMae),
	pai(famiPai)
{
	cout << "\nDados do funcionario: \n";
	print();
}

void trabalhador::print() const
{
	funcionarioNome.print();
	funcionarioCPF.print();
	mae.print();
	pai.print();
}

//
//info.cpp
//

void info::setDado(string prompt)
{
	cout << prompt << ": ";
	getline(cin, Dado);
}

void info::print() const
{
	cout << Dado << "\n";
}

//
//familia.cpp
//

void familia::setDado(string prompt)
{
	cout << prompt << ": ";
	string nome;
	getline(cin, nome);
	Dado = nome;
}

void familia::print() const
{
	cout << Dado << "\n";
}