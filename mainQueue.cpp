#include <iostream>
#include <vector>
#include "Cola.cpp"

using namespace std;

int main(){

	Cola <int> q ;
	q.adicionar(1);
	q.adicionar(2);
	q.adicionar(3);
	
	q.mostrar();
	q.eliminar();
	q.mostrar();
	q.eliminar();
	q.mostrar();
	q.eliminar();
	q.mostrar();
	q.eliminar();
	q.mostrar();
	
	return 0;

}


