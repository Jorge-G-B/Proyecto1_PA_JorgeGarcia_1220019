#include "Pila.h"



Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

void Pila::Apilar(int valor) {
	//Se crea un nuevo Nodo y se le agrega su valor
	Nodo * Nodonuevo = new Nodo();
	Nodonuevo->Valor = valor;
	//Si la pila est� vac�a el head apunta a este nuevo nodo
	if (Head == nullptr)
	{
		Head = Nodonuevo;
	}
	else 
	{
		//De lo contrario si no se encuentra vac�a se ingresa en lugar del Head, el cual se almacena en un auxiliar y se hace que el head apunte al auxiliar
		Nodo* Aux = new Nodo();
		Aux = Head;
		Head = Nodonuevo;
		Head->Siguiente = Aux;
	}
	NElementos++;
}

int Pila::Desapilar() 
{
	//Si la pila se encuentra vac�a devuelve -1
	if (Head == nullptr) 
	{
		return -1;
	}
	//Si la pila no se encuentra vac�a, se obtiene el valor del head, se hace que este se convierta en el siguiente nodo y se devuelve el valor obtenido antes
	else
	{
		int valor = Head->Valor;
		Head = Head->Siguiente;
		NElementos--;
		return valor;
	}
}
int Pila::Obtenercima() 
{
	//Se recupera el valor del head, si est� vac�a la pila regresa -1
	if (Head == nullptr) 
	{
		return -1;
	}
	else
	{
		return Head->Valor;
	}
}