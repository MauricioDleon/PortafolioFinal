#include "lista_generica.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	/**/ 
	Lista <int> miLista; 
	cout << "Lista es: " << miLista.comoCadena() << endl << endl; 
	
	Lista<int> miLista2 = miLista; 
	cout << endl; 
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl << endl; 
	
	miLista.adjuntar(41); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	miLista.adjuntar(52); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	miLista.adjuntar(63); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	miLista.insertar(2, 74); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	miLista.insertar(0, 30); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	cout << "Tamano de la lista: " << miLista.tamano() << endl << endl; 
	
	 
	cout <<  miLista.obtener(4) << endl << endl;
	
	cout << miLista.remover(2) << endl << endl; 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	
	miLista.adjuntar(85); 
	cout << "La Lista es: " << miLista.comoCadena() << endl << endl; 
	/**/  
	
	Lista<double> miListaDouble;
	cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl; 
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl << endl; 
	
	miListaDouble.adjuntar(100.1); 
	cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl; 
	
    miListaDouble.adjuntar(94.5); 
	cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl;   
	
	miListaDouble.insertar(1, 107.7); 
	cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl;
	
	miListaDouble.insertar(2, 365.50); 
	cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl;
	
    cout << "Tamaño de la lista: " << miListaDouble.comoCadena() << endl << endl; 
    
    cout << miListaDouble.obtener(4) << endl << endl; 
    
    cout << miListaDouble.remover(2) << endl << endl; 
    cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl; 
    
    miListaDouble.adjuntar(104.5); 
    cout << "La Lista es: " << miListaDouble.comoCadena() << endl << endl; 
    
    return 0; 

 }
