#include "Lista.h"



Lista::Lista()
{
	NElementos = 0;
}


Lista::~Lista()
{
}

void Lista::InsertarI(int valor) {
	//Se crea un nuevo nodo y se ingresa el valor a ese Nodo, si este se encuentra vacío el head y el end apuntan a este nodo 
	NodoL *NuevoNodo = new NodoL();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	//De lo contrario se ingresa el nodo en la primera posición de la lista cambiando el head
	else
	{
		NuevoNodo->Siguiente = Head;
		Head->Anterior = NuevoNodo;
		Head = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarF(int valor) {
	//Se realiza el mismo proceso de insertar, pero cambiando a insertar en la última posición cambiando el End. 
	NodoL *NuevoNodo = new NodoL();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		End->Siguiente = NuevoNodo;
		NuevoNodo->Anterior = End;
		End = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarP(int valor, int posicion) {
	//Se realiza el proceso de insertar, pero si la lista no se encuentra vacía se recorre la misma hasta llegar a la posición que se desea ingresar
	NodoL *NuevoNodo = new NodoL;
	NuevoNodo->Valor = valor;
	if (Head==nullptr)
	{
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		if (posicion == 1) 
		{
			InsertarI(valor);
		}
		else if (posicion==(NElementos+1))
		{
			InsertarF(valor);
		}
		else if (posicion > 1 && posicion<(NElementos+1))
		{
			NodoL * Aux;
			Aux = Head;
			for (int i = 0; i < posicion; i++)
			{
				Aux = Aux->Siguiente;
			}
			Aux->Anterior->Siguiente = NuevoNodo;
			NuevoNodo->Siguiente = Aux;
			NuevoNodo->Anterior = Aux->Anterior;
			Aux->Anterior = NuevoNodo;
			NElementos++;
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Error posición invalida");
		}
	}
}

int Lista::Eliminar(int posicion) 
{
	//Se elimina el nodo en la posición deseada, por lo que recorreremos la lista hasta llegar a esa posición y se regresa el valor del nodo eliminado
	NElementos = NElementos - 1;
	NodoL * Aux;
	if (posicion == 1) 
	{
			Aux = Head;
			Head = Head->Siguiente;
		return Aux->Valor;
	}
	else if(posicion == NElementos)
	{
		Aux = End;
		End = End->Anterior;
		return Aux->Valor;
	}
	else if(posicion>1 && posicion < NElementos)
	{
		Aux = Head;
		for (int i = 0; i < NElementos; i++)
		{
			Aux = Aux->Siguiente;
		}
		Aux->Anterior->Siguiente = Aux->Siguiente;
		Aux->Siguiente->Anterior = Aux->Anterior;
		return Aux->Valor;
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Error posición invalida");
	}
}
int Lista::MostrarP(int posicion) {
	//Se ingresa una posición y se busca esa posición en la lista y se devuelve el valor del nodo en esa posición
	NodoL * Aux = new NodoL();
	Aux = Head;
	if(posicion >=0 && posicion <=NElementos)
	{
	for (int i = 0; i < posicion; i++)
	{
		Aux = Aux->Siguiente;
	}
	return Aux->Valor;
	}
	else
	{
		return -1;
	}

}