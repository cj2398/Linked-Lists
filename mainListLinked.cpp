#include <iostream>
#include "nodoLinkedList.hh"

using namespace std;
int main()
{
	/* code */
	LinkedList<char> a;

	int tamanio;
	cout << "Ingrese tamanio: ";
	cin >> tamanio;
	a.llenarLista(tamanio);
	a.imprimir();
	return 0;
}
