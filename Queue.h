#ifndef __COLA_H__
#define __COLA_H__

#include <vector>
using namespace std;

template <class C>

class Cola : public vector <C>{
	public:
		Cola();
		void adicionar(C element);
		void mostrar();
		C eliminar();

};

#endif
