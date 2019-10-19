#pragma once
#include "NodoL.h"
class Lista
{
public:
	NodoL * Head = nullptr;
	NodoL * End = nullptr;
public:
	int NElementos = 0;
public:
	void InsertarI(int valor);
public:
	void InsertarF(int valor);
public: 
	void InsertarP(int valor, int posicion);
public:
	int MostrarP(int Posicion);
public:
	int Eliminar(int posicion);
public:
	Lista();
	~Lista();
};

