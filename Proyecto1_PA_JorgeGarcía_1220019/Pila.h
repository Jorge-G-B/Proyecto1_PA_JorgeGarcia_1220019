#pragma once
#include "Nodo.h"
class Pila
{
private:
	Nodo* Head = nullptr;
public:
	int NElementos = 0;
public:
	void Apilar(int valor);
public:
	int Desapilar();
public:
	int Obtenercima();
public:
	Pila();
	~Pila();
};

