#include <vector>
#include <iostream>
#include "Queue.h"

using namespace std;

template <class C>
Cola <C>::Cola(): vector<C>(){}

template <class C>
void Cola <C>:: adicionar(C elemento){
	this -> push_back(elemento);
}
template <class C>
void Cola <C>:: mostrar()
{
	int n= this -> size();
	for (int i= 0; i < n; i++){
	
		cout << this ->  at(i)<< ",";
	}
	cout<< endl; 
}

template <class C>
C Cola <C>:: eliminar(){
	int UltPosicion = this -> size()-1;
	C elemento = this -> at(UltPosicion);
	this -> pop_back();
	return elemento;
}
