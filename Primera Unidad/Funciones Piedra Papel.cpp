#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>

//protps 
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main () {
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador(); 
	movimientoComputadora = generarMovimientoComputadora(); 
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0; 
}

//implement

std::string generarMovimientoComputadora() {
	std::string movimiento; 
	int numeroAleatorio;
	
	// Num Aleatorio
	
	srand(time(0)); 
	numeroAleatorio = rand() % 5 + 1;
	
	switch (numeroAleatorio)
	{
		case 1:
			movimiento = "piedra";
			break;
		
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		case 4:
			movimiento = "lagarto";
			break;
		case 5:
			movimiento = "spock";
			break;	
	}
	
	std::cout <<"computadora: " <<movimiento << "\n";
	return movimiento; 
}

std::string obtenerMovimientoJugador() {
	using namespace std;
	string movimiento;
	
	cout <<"piedra, papel, tijera, lagarto o spock";
	cin >> movimiento; 
	
	return movimiento;	
}

// Ganador 

void determinarGanador(std::string computadora, std::string jugador) {
	
   if (computadora ==jugador){
   	std::cout<< "empate!\n";
   }
   else if (jugador == "piedra"){
   	procesarEntradaJugadorPiedra(computadora);
   }
   else if (jugador == "papel"){
   	procesarEntradaJugadorPapel(computadora);
   }
   else if (jugador == "tijera"){
   	procesarEntradaJugadorTijera(computadora);
   }
   else if (jugador == "lagarto"){
   	procesarEntradaJugadorLagarto(computadora);
   }
   else if (jugador == "spock"){
   	procesarEntradaJugadorSpock(computadora);
   }
   else {
   	std::cout<<"entrada no valida \n";
   }
}

void procesarEntradaJugadorPiedra(std::string computadora) {
	if (computadora =="papel") {
		std::cout << "LA COMPUTADORA GANA. PAPEL CUBRE PIEDRA. \n";
	}
	else if (computadora =="tijera") {
		std::cout<<"USTED GANA. PIEDRA DESTRUYE TIJERAS. \n";
	}
	else if (computadora =="lagarto") {
		std::cout<<"LA COMPUTADORA GANA. LA PIEDRA APLASTA EL LAGARTO. \n";
	}
	else if (computadora =="spock") {
		std::cout<<"LA COMPUTADORA GANA. SPOCK DESINTEGRA LA PIEDRA. \n";
	}	
}

void procesarEntradaJugadorPapel(std::string computadora) {
	if (computadora =="tijera") {
		std::cout << "LA COMPUTADORA GANA. LA TIJERA CORTA EL PAPEL. \n";
	}
	else if (computadora =="piedra") {
		std::cout<<"USTED GANA. PAPEL ENVUELVE PIEDRA. \n";
	}
		else if (computadora =="lagarto") {
		std::cout<<"LA COMPUTADORA GANA. EL LAGARTO DEBORA EL PAPEL. \n";
	}
		else if (computadora =="spock") {
		std::cout<<"LA COMPUTADORA GANA. EL PAPEL DESAPRUEBA A SPOCK. \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora) {
	if (computadora =="piedra") {
		std::cout << "LA COMPUTADORA GANA. PIEDRA DESTRUYE LAS TIJERAS. \n";
	}
	else if (computadora =="papel") {
		std::cout<<"USTED GANA. TIJERAS CORTA EL PAPEL. \n";
	}
		else if (computadora =="lagarto") {
		std::cout<<"LA COMPUTADORA GANA. TIJERAS DECAPITAN AL LAGARTO. \n";
	}
		else if (computadora =="spock") {
		std::cout<<"LA COMPUTADORA GANA. SPOCK DESINTEGRA LAS TIJERAS. \n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora) {
	if (computadora =="piedra") {
		std::cout << "LA COMPUTADORA GANA. PIEDRA APLASTA EL LAGARTO. \n";
	}
	else if (computadora =="papel") {
		std::cout<<"USTED GANA. EL LAGARTO DEBORA EL PAPEL. \n";
	}
		else if (computadora =="tijera") {
		std::cout<<"LA COMPUTADORA GANA. EL LAGARTO FUE DECAPITADO. \n";
	}
		else if (computadora =="spock") {
		std::cout<<"USTED GANA. SPOCK FUE ENVENENADO. \n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora) {
	if (computadora =="piedra") {
		std::cout << "USTED GANA. SPOCK DESINTEGRO LA PIEDRA. \n";
	}
	else if (computadora =="papel") {
		std::cout<<"LA COMPUTADORA GANA. EL PAPEL DESAPRUEBA A SPOCK. \n";
	}
		else if (computadora =="tijera") {
		std::cout<<"USTED GANA. LAS TIJERAS FUERON APLASTADAS. \n";
	}
		else if (computadora =="lagarto") {
		std::cout<<"LA COMPUTADORA GANA. SPOCK FUE ENVENENADO. \n";
	}
}
























