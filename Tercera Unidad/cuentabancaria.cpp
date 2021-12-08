#include "cuentabancaria.h"

using namespace std; 

int main(){
	//creacion de cuenta
	CuentaBancaria miCuenta("A-12342", "Juan Franco", 2333.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl; 
	cout << "N. Cuenta: " << miCuenta.getNumeroCuenta() << endl; 
	cout << " Saldo a Favor $ " << miCuenta.getSaldo() << endl; 
	cout << " ---------------------------------------------- "<< endl; 
	
		//creacion de cuenta
	CuentaBancaria cuentaChero("B-34353", "Hector Perez", 2024.00);
	cout << "Titular: " << cuentaChero.getNombreTitular() << endl; 
	cout << "N. Cuenta: " << cuentaChero.getNumeroCuenta() << endl; 
	cout << " Saldo a Favor $ " << cuentaChero.getSaldo() << endl; 
	cout << " ---------------------------------------------- "<< endl; 
	
		//creacion de cuenta
	CuentaBancaria CuentaNoExiste("C-15656", "Juan Franco", -999.00);
	cout << "Titular: " << CuentaNoExiste.getNombreTitular() << endl; 
	cout << "N. Cuenta: " << CuentaNoExiste.getNumeroCuenta() << endl; 
	cout << " Saldo a Favor $ " << CuentaNoExiste.getSaldo() << endl; 
	cout << " ---------------------------------------------- "<< endl; 
	
	//Retiros
	cout << "RETIRAR 300$ DE MI CUENTA " << miCuenta.getNumeroCuenta() << endl;
	cout << "saldo inicial $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(300);
	cout << "SALDO EXISTENTE " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------------- "<< endl;
	
	cout << "RETIRAR -300$ DE MI CUENTA " << CuentaNoExiste.getNumeroCuenta() << endl;
	cout << "saldo inicial $" << CuentaNoExiste.getSaldo() << endl;
	miCuenta.retirar(-300);
	cout << "SALDO EXISTENTE " << CuentaNoExiste.getSaldo() << endl;
	cout << "----------------------------------------------- "<< endl;
	
		cout << "DEPOSITAR DE MI CUENTA " << miCuenta.getNumeroCuenta() << endl;
	cout << "saldo inicial $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(3000);
	cout << "SALDO EXISTENTE " << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------------- "<< endl;
	
	cout << "DEPOSITAR -300$ DE MI CUENTA " << cuentaChero.getNumeroCuenta() << endl;
	cout << "saldo inicial $" << cuentaChero.getSaldo() << endl;
	cuentaChero.retirar(-300);
	cout << "SALDO EXISTENTE " << cuentaChero.getSaldo() << endl;
	cout << "----------------------------------------------- "<< endl;
	
	return 0; 
	
} 
