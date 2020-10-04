#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

//
//info.h
//
class info
{
public:

	info() : Dado(""){};
	info(string prompt) { setDado(prompt); };
	void setDado(string);
	void print() const;

private:

	string Dado;
};


//
//familia.h
//
class familia
{
public:
	familia() : Dado("") {};
	familia(string prompt) { setDado(prompt); };
	void setDado(string);
	void print() const;
private:
	string Dado;
};


//
//trabalhador.h
//
class trabalhador
{
public:
	trabalhador(
		const info&,
		const info&,
		const familia&,
		const familia&
	);
	void print() const;

private:
	const info funcionarioNome;
	const info funcionarioCPF;
	const familia mae;
	const familia pai;
};


class Documento
{
public:
	Documento() {};
	~Documento() {};
private:
	string    numero;
	string    emissao;
};

class Local
{
public:
	Local() {};
	~Local() {};
private:
	string    nome;
	string    rua;
	string    complemento;
	string    gps;
};

class Pessoa
{
public:
	Pessoa() {};
	~Pessoa() {};
private:
	string    nome;
	Local     endereco;
	string    telefone;
};

class _Trabalhador
{
public:
	_Trabalhador() {};
	~_Trabalhador() {};
private:
	Pessoa    nome;
	Documento CNH;
	Documento RG;
	Documento passaporte;

	Local     endereco;
};
