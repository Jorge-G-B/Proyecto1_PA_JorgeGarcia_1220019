#include "Colas.h"


Colas::Colas()
{
	NElementos = 0;
}
Colas::~Colas()
{
}
void Colas::Insertar(int valor)
{
	//Se crea un nuevo Nodo y se le agrega su valor
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->Valor = valor;
	//Si el head se encuentra vacío, el head y el end apuntan a este nodo
	if (Head == nullptr) 
	{
		Head = NodoNuevo;
		End = NodoNuevo;
	}
	//De lo contrario se utiliza un nodo auxiliar para que tome el valor del End y apunte hacia nuestro nodo
	else
	{
		Nodo* Aux = new Nodo();
		Aux = End;
		End = NodoNuevo;
		Aux->Siguiente = End;

	}
	//Se aumenta el número de elementos en la lista
	NElementos++;
		
}
int Colas::Quitar()
{	
	//Si la cola está vacía devuelve -1
	if (Head == nullptr) {
		return -1;
	}
	//Si la cola no está vacía se elimina la primera posición y se devuelve su valor
	else 
	{
		int Valor = Head->Valor;
		Head = Head->Siguiente;
		NElementos--;
		return Valor;
	}
}
int Colas::ObtenerPP() {
	//Se obtiene el primer dato de la cola, si está vacía devuelve -1
	if (Head == nullptr) 
	{
		return -1;
	}
	else 
	{
		return Head->Valor;
	}
}
int Colas::ObtenerUP() {
	//Se obtiene el ultimo dato de la cola, si está se encuentra vacía se obtiene -1
	if (End == nullptr)
	{
		return -1;
	}
	else
	{
		return End->Valor;
	}
}