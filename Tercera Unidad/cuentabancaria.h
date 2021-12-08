#include <iostream> 
#include <string>

using namespace std; 

class CuentaBancaria {
    private:
      string numeroCuenta;
	  string nombreTitular;
	  double saldo; 
public: 
    CuentaBancaria(string num, string titular,double saldo);
    double getSaldo();
    string getNumeroCuenta();
    string getNombreTitular();
    void depositar(double importeDeposito);
    void retirar(double importeRetiro);
}; 

//contructor 
CuentaBancaria::CuentaBancaria(string num, 
    string titular, double saldo) {
	 //asignacion de salfos 
	 if (saldo < 0) {
		this->saldo = 0.00;
    	} else {
		this->saldo = saldo;
    	}
	 this->numeroCuenta = num;
	  this-> nombreTitular = titular;
    }

double CuentaBancaria::getSaldo(){
	return this->saldo;
}

string CuentaBancaria::CuentaBancaria::getNumeroCuenta(){
	return this->numeroCuenta;
}

string CuentaBancaria::getNombreTitular(){
	return this->nombreTitular;
}

void CuentaBancaria::depositar(double importeDeposito){
	if (importeDeposito > 0){
		//this->saldo = this->saldo + importeDeposito;
		this ->saldo += importeDeposito;
	} else {
		cout << "NO HAY SALDO SUFICIENTE" << endl;
	}
}


void CuentaBancaria::retirar(double importeRetiro){
	if (importeRetiro > 0 && importeRetiro <= this ->saldo){
		//this -> saldo = this->saldo - importeRetiro;
		this->saldo -= importeRetiro;
	} else {
		cout << "ERROR DE TRANSACCION" << endl;
	}
}















