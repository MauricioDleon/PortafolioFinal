#include <iostream> 
#include <string>
#include "pila.hpp"

using std::string; 
using std::cin;
using std::cout; 
using std::endl; 

bool estanLlavesBalanceadas(string expresion){ 
Pila<char> unaPila; 
for(size_t i = 0; i < expresion.length(); i++) {
	char caracter = expresion[i]; 
	cout << caracter << endl; //se puede borrar 
	if(caracter == '<\w+>') {
		unaPila.push(caracter);
		cout << unaPila.pilaComoCadena() << endl; 
	} else if (caracter == '</\w+>' ) {
		if (unaPila.estaPilaVacia()) {
			return false; 
		}
		unaPila.pop();
		cout << unaPila.pilaComoCadena() << endl; 
	}
 }
 return unaPila.estaPilaVacia(); 
}

int main() {
	string cadena;
	cout << "INGRESE UNA EXPRESION: " << endl; 
	cin >> cadena;
	if (estanLlavesBalanceadas(cadena)) {
	} else {
		cout << "Las Llaves no estan balanceadas"; 
	}
	return 0; 
}




















