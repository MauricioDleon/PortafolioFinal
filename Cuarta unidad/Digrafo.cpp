#ifdef DIAGRAFO_H
#define DIAGRAFO_H

#include <list>
#include<iterator>

using std::list;
using std::count;
using std::endl;

class Diagrafo {
	private: 
	int vertices; 
	int aristas;
	list<int> *adyacentes;

    public:
    	Digrafo();
    	Diagrafo(const Digrafo &otro);
    	~Digrafo();
    	int getVertices() const; 
    	void SetVertices(int vertices); 
    	int getAristas() const; 
    	list<int> getAdyacentes(int v) const; 
    	void agregarArista(int v, int w);
    	void imprimir(); 
};

Digrafo::Digrafo() : vertices(0), aristas(0), adyacentes(nullptr) {
	
}

Digrafo::Digrafo(const Digrafo &otro) {
	vertices = otro.vertices;
	aristas = otro.aristas;
	if (vertices == 0) {
		adyacentes = nullptr;
	}
	
	else { 
	adyacentes = new list<int>[vertices]; 
	for (int i = 0; <vertices; i++) {
		list<int>::iterator it; 
		for (it = otro.adyacentes[i].begin(); it != otro.adyacentes)
	}
	}
}






























