//lista.cpp
#include<vector>
#include "lista.h"
using namespace std;

template class<T>

Lista<T>::Lista():vector<T>(){}

void Lista<T> ::adicionar(T elemento){
	this-> push_back(elemento);
}


void eliminar(int pos){
	T elemento = this->at(pos);
	this -> pop_back();
	return elemento;
}


void mostrar(){
	for(int i; i<this->size();i++){
		cout<<this-> at(i);
	}
}


int longiud(){
	return size();
}


void insertar(T elemento);

T getElemento(int pos){
	T elemento= this-> at(pos);
	return T;
}



int buscar(T elemento){
	for(int i=0; i< this->size();i++){
		T tmp = this->at(i);
		if (tmp == elemento){
			return i;
		}
	return -1;
	}	
}



void setElemento(T elemento, int pos){
	this-> at(pos) = elemento;
}
