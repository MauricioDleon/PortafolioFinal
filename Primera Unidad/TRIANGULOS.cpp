#include <iostream>
using namespace std;
 
int main()
{
	cout <<"**** Determinador de triangulos equilatero, escaleno o isosceles ****" << endl; 
	
    int a, b, c;
    int n1, n2;
    int numeroDigitado;
    double acumulador;
    int contador;
 
    cout << "\nPrimer lado: "; cin >> a;
    cout << "Segundo lado: "; cin >> b;
    cout << "Tercer lado: "; cin >> c;
 
    if (a == b == c)
        cout << "\nEs un triangulo Equilatero" << endl;
    else if (a == b || a == c || b == c)
        cout << "\nEs un triangulo Isosceles" << endl;
    else
        cout << "\nEs un triangulo Escaleno"<< endl;
        
    //programa 2
    
    cout <<" DETERMINADOR DE NUMERO MAYOR : "<< endl;
    
    cout <<" *** DIGITE 2 NUMEROS POR FAVOR *** "<< endl;
    	cin >>n1>>n2; 
    	
    	if (n1>n2) {
    		cout<<"El Mayor es: "<<n1<< endl; 
		}
		else {
			cout<<"El mayor es: "<<n2<< endl;
              }
              
    
    // programa 3
    
    cout <<"PROMEDIO N NUMEROS (INGRESAR 0 PARA TERMINAR )" <<endl ; 
    
    cout <<"Ingrese los numeros de la seleccion : " << endl ;
    
    acumulador = 0;
    contador = 0; 
    numeroDigitado = 1; 
    
    while (numeroDigitado > 0 ) 
	
	{
    	
    	cin >> numeroDigitado; 
    	
    	if( numeroDigitado > 0) {
	
    	
    	acumulador += numeroDigitado;
		contador++; 
		
		}
	 
	}
	
	cout << "El promedio de los numeros ingresados es " << acumulador / contador; 
	
    return 0;
    
 }
    
    
