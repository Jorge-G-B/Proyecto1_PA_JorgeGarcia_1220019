#pragma once
#include "Nodo.h"
class Colas
{
private:
	Nodo* Head = nullptr;
private:
	Nodo* End = nullptr;
public:
	int NElementos = 0;
public:
	void Insertar(int valor);
public:
	int Quitar();
public:
	int ObtenerPP();
public:
	int ObtenerUP();
public:
	Colas();
	~Colas();
};

