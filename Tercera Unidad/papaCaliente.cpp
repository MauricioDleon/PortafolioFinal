#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "cola.hpp"

using namespace std; 

int numeroAleatorio(int max); 
void papaCaliente(const vector<string> &listaNombres); 

int main(){
	vector<string> jugadores = {"1.Erick", "2.Emanuel", "3.Bryan", "4.Gabriel", "5.Maria", "6.Oscar", "7.Chris", "8.Ester", "9. Carlos", "10.Carlos"};
	papaCaliente(jugadores); 
	return 0;
}

int numeroAleatorio(int max){
	static bool semillaCreada = false; 
	if(!semillaCreada){
		srand(time(0)); 
		semillaCreada = true; 
	}
	return rand() % max; 
}

void papaCaliente(const vector<string> &listaNombres) {
	int cantidadJugadores = listaNombres.size();
	Cola<string> simulacion; 
	for (int i = 0; i < cantidadJugadores; i++){
		simulacion.enqueue(listaNombres[i]);
	}
	
	for (int i = cantidadJugadores; i > 1; i--){
		cout << "Quien tiene la PAPA CALIENTE" << endl; 
		for (int pases = numeroAleatorio(2*cantidadJugadores); pases > 0; pases--){
			string jugador = simulacion.dequeue();
			cout << jugador << endl; 
			simulacion.enqueue(jugador);
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		string funado = simulacion.dequeue();
		cout << funado << endl; 
		cout << "¡¡¡ALTO!!!" << funado << "sale del juego.... " << endl << endl; 
	}
	
	string ganador = simulacion.dequeue();
	cout << ganador << "gano el juego" << endl; 
}
