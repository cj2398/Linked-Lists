#include <iostream>

using namespace std;

template <class U>

class Nodo
{
public:
	U dato;
	Nodo *siguiente;
	Nodo(){
		dato=NULL;
		siguiente=NULL;
	}
	Nodo(U dato){
		this->dato=dato;
		siguiente = NULL;
	}

	~Nodo();
	void eliminarNodo(){
		if(siguiente)
			siguiente->eliminarNodo();
		delete this;
	}
	void imprimirNodo(){
		cout << dato << " -> ";
	}

};

template <typename U>
class LinkedList
{
private:
	Nodo<U> *nodo;
	//int num_nodo;
public:
	LinkedList(){
		nodo=NULL;
		//num_nodo=0;
	}
	~LinkedList(){}
	void insertarFinal(U dato){
		Nodo<U> *nuevoNodo = new Nodo<U>(dato);

		Nodo<U> *temporal = nodo;
		if (!nodo)
		{
			nodo = nuevoNodo;
		}
		else{
			while(temporal->siguiente != NULL){
				temporal = temporal->siguiente;
			}
			temporal->siguiente = nuevoNodo;
		}
		//num_nodo++;
	}

	void llenarLista(int tamanio){
		U dato;
		for (int i = 0; i < tamanio; ++i)
		{
			cout << "Ingrese el elemento " << i <<" : ";
			cin >> dato;
			insertarFinal(dato);
		}
	}
	void imprimir(){
		Nodo<U> *temporal = nodo;
		if (!nodo)
		{
			cout <<"LISTA VACIA"<<endl;
		}
		else{
			while(temporal){
				temporal->imprimirNodo();
				if (!temporal->siguiente)
				{
					cout << "NULL";

				}
				temporal = temporal->siguiente;
			}
		}
		cout << endl << endl;
	}
};
