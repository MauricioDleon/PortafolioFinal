#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include<sstream>

using std::string; 
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>
class Lista {
	private: 
	   int cuenta; 
	   int capacidad; 
	   TIPODATO *items; 
	   void agrandar(); 
    public: 
    Lista(int capacidad);
    Lista();
    ~Lista(); 
    Lista(const Lista &otra); // Construir 
    bool estaVacia();
    int tamano();
    void insertar(int indice, TIPODATO item ); 
    void adjuntar(TIPODATO item); 
    TIPODATO obtener(int indice); 
    bool contiene(TIPODATO item); 
    TIPODATO remover(int indice); 
    string comoCadena();
    
};

//constructor 

template <typename TIPODATO> 
Lista<TIPODATO>::Lista(int capacidad) {
	cout << "creando una lista vacia...." << endl; 
	this->cuenta = 0;
	this->capacidad = capacidad;
	this-> items = new TIPODATO[capacidad]; 
	cout << " La lista tiene una capacidad de " << this->capacidad << " elementos" << endl;
 }

//CONTRUCTOR 

template <typename TIPODATO> 
Lista<TIPODATO>::Lista() : Lista(4) {} 

//destructor 
template<typename TIPODATO> 
Lista<TIPODATO>::~Lista() { 
      cout << "destruyendo lista.." << endl; 
      delete[] items; 
}

//construir 
template<typename TIPODATO> 
Lista<TIPODATO>::Lista(const Lista<TIPODATO> &otra) {
	cout << "Copiando una lista desde otra..." << endl; 
	this-> cuenta = otra.cuenta;
	this->capacidad = otra.capacidad;
	this-> items = new TIPODATO[capacidad];
	for (int i = 0; i < this ->cuenta; i++)
	    this->items[i] = otra.items[i]; 
}

// lista vacia? 
template<typename TIPODATO>
bool Lista<TIPODATO>::estaVacia() { 
cout << "Comprobando si esta vacia" << endl; 
return this->cuenta == 0;
}

//tamaño de la lista
template <typename TIPODATO>
int Lista<TIPODATO>::tamano() {
	cout <<"obteniendo el tamaño de la lista" << endl;
	return this->cuenta;
}

template <typename TIPODATO> 
void Lista<TIPODATO>::agrandar() {
	
	cout << "DUPLICANDO EL TAMAÑO DE LA LISTA..." << endl;
	TIPODATO *temp = this->items;
	this->capacidad *=2;
	this->items = new TIPODATO[capacidad];
		for (int i = 0; i < cuenta; i++)
	    this->items[i] = temp[i]; 
	delete[] temp;
	cout << "lista tiene capacidad de " << this->capacidad << "elementos" << endl;
	
}

//indice inserccion 

template <typename TIPODATO> 
void Lista<TIPODATO>::insertar(int indice, TIPODATO item) {
	//validar
	if (indice < 0 || indice > this->cuenta) throw "indice out range";
	
	//agrandar lista
	
	if (this->cuenta >= this->capacidad) this->agrandar();
	
	cout << "insertando elemento" << endl;
	//desplasar elemento 
	for (int i = cuenta = 1; i >= indice; i--) {
		cout << "desplazando elemento" << items[i] << "del indice" ;
		cout << i << " al indice" << (i+1) << endl;
		this->items[i+1] = this->items[i];
	}
	
	//insertado elemento 
	cout << "INSERTANDO ELEMENTO" << item << "en el indice" << indice << endl;
	this->items[indice] = item;
	
	//incrementar la cuenta 
	
	cout << "incremento la cuenta de elemtos" << endl; 
	this->cuenta++;
	
}
	
//agregat elemento al final 
template <typename TIPODATO> 
void Lista<TIPODATO>::adjuntar(TIPODATO item) {
	this-> insertar(this->cuenta, item);
}	
	
	//valor del elemento en la posicion 
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::obtener(int indice) {
	//validar 
	if (indice < 0 || indice >= this->cuenta) throw "indice out of range";
	if(this->estaVacia()) throw "no se pueden recuperar los elementos de la lista si esta vacia";
	
	cout << "recuperando elemtos en el indice" << indice << endl; 
	return this->items[indice]; 
	
}	
	
//item en la lista? 
template <typename TIPODATO> 
bool Lista<TIPODATO>::contiene(TIPODATO item) {
	for (int i = 0; i < this-> cuenta; i++) {
		cout << "Recorriendo elemento con indice" << i << endl; 
		if (this->items[i] == item) 
		return true; 
	}
	
	return false; 
}
	
	
//remover elemento del indice 
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::remover(int indice) {
	//validar ind.
	if (this->estaVacia()) throw "No se puede rmover elementos vacios"; 
	if (indice < 0 || indice >= this->cuenta) throw "indice out of range";
	
	cout <<" Removiendo el elemento con indice " << indice << "----" << endl; 
	//leer valor 
	TIPODATO valor = this -> items[indice];
	for (int i = indice; i < cuenta - 1; i++) {
		cout << "Desplazamiento elemento" << items[i] << "del indice" ; 
		cout << (i+1) << "al indice " << i << endl; 
		this->items[i] = this->items[i+1]; 
	}
	
	//reducir la cuenta
	cout << "reduciendo la cuenta" << endl; 
	this->cuenta--; 
	return valor; 
}

template <typename TIPODATO> 
string Lista<TIPODATO>::comoCadena() {
	ostringstream s; 
	s<<"["; 
	for (int i = 0; i < (this ->cuenta); i++) {
		s << this->items[i];
		if ( i < this-> cuenta-1)
		s << ", "; 
	}
	s << "]"; 
	return s.str(); 
}

#endif 













