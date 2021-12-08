#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>

using namespace std;
int main () {
	int movJug;
	cout<<"juguemos a piedra, papel, tijera, spock y lagarto" ;
	cout<< " 1. piedra\n 2. Papel\n 3. Tijera\n 4. Spock\n 5. Lagarto\n";
	cout<<"Elige tu jugada a continuacion \n : " ;
	cin >>movJug; 
	srand(time(0));
	string movComp;
	int numMov = rand () % 5 + 1;
	switch(numMov) {
		case 1: 
		    movComp = "piedra";
		    break; 
		case 2: 
		    movComp = "papel";
		    break;     
		case 3: 
		    movComp = "tijera";
		    break; 
		case 4: 
		    movComp = "Spock";
		    break;  
		case 5: 
		    movComp = "Lagarto";
		    break; 	   
	}
	cout << "La computadora escogio: " <<movComp << endl;
	if (movJug == numMov){
		cout <<" empate \n";
	} else if ( (movJug == 1) && (numMov == 3) ) {
		cout << "Ganaste \n";
	}else if ( (movJug == 2) && (numMov == 1) ) {
		cout << "Ganaste \n";
	}else if ( (movJug == 3) && (numMov == 2) ) {
		cout << "Ganaste \n";		
	} else if ( (movJug == 5) && (numMov == 4) ) {	
	  cout << "Ganaste \n"; 
	} else if ( (movJug == 4) && (numMov == 3) ) {
		cout << "Ganaste \n";
	} else if ( (movJug == 3) && (numMov == 5) ) {
		cout << "Ganaste \n" ; 
	}else if ( (movJug == 5) && (numMov == 2) )  {
		cout << "Ganaste \n" ; 
	}else if ( (movJug == 2) && (numMov == 4) )  {
		cout <<"Ganaste \n";
	} else if ( (movJug == 4) && (numMov == 1) ) {
		cout <<"Ganaste \n";
	} else {
		cout << "Perdiste \n"; 
	}
	
	cout << "Mauricio De Leon" ;
	return 0; }  
	
	
	
	
    
	
	

