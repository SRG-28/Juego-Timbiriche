#include"Interfaz.h"


int Interfaz::menuEmpresa() {
	int opt;
	cout << "--------------------EmpresaDots--------------------" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "1-Registrarse al Juego                              " << endl;
	cout << "2-Ingresar al Juego                                 " << endl;
	cout << "3-Salir                                             " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Digite opcion                                       " << endl;
	cin >> opt;
	return opt;
}
void Interfaz::menu2Empresa() {
	string nom, ced;
	
	EmpresaDots*emp1=new EmpresaDots(100000);
	cout << "Digite nombre" << endl;
	cin >> nom;
	cout << "Digite ID" << endl;
	cin >> ced;
	Observer* us;
	us= new Jugador(nom);
	us->update(1000, ced);
	
	if (emp1->registrado(us) == false) {
		if (us->getDinero() >= 500) {
			emp1->attach(us);
			cout << "**************************************************" << endl << endl;
			cout << "            Clave del dia : 123 "  << endl << endl;
			cout << "**************************************************" << endl;


		}
		else {
			cout << "No tiene suficiente dinero para registrarse" << endl;
		}
	}
	else
		cout << "El usuario ya se encuentra Registrado" << endl;
}

int Interfaz::menu3Empresa() {
	int clave = 0;
	cout << "Digite Clave" << endl;
	cin >> clave;
	return clave;
}

int Interfaz::menuCampo() {
	int opt;
	cout << "            Primero Elija el Campo de Juego                " << endl;
	cout << "---------------Crear Campo Resultante--------------------- " << endl;
	system("pause");
		cout << "        -CREA TU PROPIO CAMPO-         " << endl;
		cout << "1-Crear 6  Puntos                      " << endl;
		cout << "2-Crear 9  Puntos                      " << endl;
		cout << "3-Crear 15 Puntos                      " << endl;
		cout << "4-Salir                                " << endl;
		cout << "---------------------------------------" << endl;
		cout << "Digite opcion:                         " << endl;
		cin >> opt;
		return opt;
}

int Interfaz::menuJuego() {
	int opt;
		cout << "----------------Bienvenido Al Juego Dots-------------------" << endl;
		cout << "1-Reglas del Juego                                         " << endl;
		cout << "2-Jugar                                                    " << endl;
		cout << "3-Salir                                                    " << endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Digite una opcion                                          " << endl;
		cin >> opt;
		return opt;

}

int Interfaz::menuEstrategia() {
	int opt;


		cout << "  -Elija la Estrategia de la Maquina-       " << endl;
		cout << "1-Juego Aleatorio                           " << endl;
		cout << "2-Juego Central                             " << endl;
		cout << "4-Juego Cercano                             " << endl;
		cout << "5-Juego Isla                                " << endl;
		cout << "6-Juego Perisferico                         " << endl;
		cout << "7-Salir                                     " << endl;
		cout << "--------------------------------------      " << endl;
		cout << "Digite opcion:                              " << endl;
		cin >> opt;
		return opt;

}
void Interfaz::Salir() {
	cout << "Gracias" << endl;
}

int Interfaz::menuJugada() {
	int opt;


	cout << "        -Elija tipo De juego-         " << endl;
	cout << "1-Dos Jugadores                       " << endl;
	cout << "2-Jugar con Maquina                   " << endl;
	cout << "3-Salir                               " << endl;
	cout << "--------------------------------------" << endl;
	cout << "Digite opcion:                        " << endl;
	cin >> opt;
	return opt;
 }


void Interfaz::Reglas() {
	cout << "Inicio del juego" << endl;

	cout << "* * * " << endl;
	cout << "* * * " << endl;
	cout << "* * * " << endl;

	cout << endl<<endl;


	cout << "El jugador A pone una raya" << endl;

	cout << "* * * " << endl;
	cout << "*-* * " << endl;
	cout << "* * * " << endl;

	cout << endl << endl;


	cout << "El jugador B pone una raya" << endl;

	cout << "* * * " << endl;
	cout << "*-* * " << endl;
	cout << "* * * " << endl;

	cout << endl << endl;



	cout << "se turnan hasta que alguien tome un cuadro y puede seguir jugando" << endl;

	cout << "*-* * " << endl;
	cout << "|A|    " << endl;
	cout << "*-* * " << endl;
	cout << "* * * " << endl;

	cout << endl << endl;



	cout << "Gana el que capture mas Cuadros" << endl;


}


void Estrategiaale(JuegoAleatorio*ale) {
	EstApertura* p = new JuegoAleatorio();
	Maquina* m = new Maquina();
	m->setEstrategia(p);
	m->ejecutarEstrategia();


}
void Interfaz::Estrategiacent() {
	
	EstApertura* p = new JuegoCentral();
	Maquina* m=new Maquina();
	m->setEstrategia(p);
	m->ejecutarEstrategia();
 }
void Interfaz::Estrategiaisla() {
	EstApertura* p = new JuegoIslas();
	Maquina* m=new Maquina();
	m->setEstrategia(p);
	m->ejecutarEstrategia();
 }
void Interfaz::Estrategiacer() {
	EstApertura* p = new JuegoCercano();
	Maquina* m = new Maquina();
	m->setEstrategia(p);
	m->ejecutarEstrategia();
 }
void Interfaz::Estrategiaper() {
	EstApertura* p = new JuegoPeriferico();
	Maquina* m = new Maquina();
	m->setEstrategia(p);
	m->ejecutarEstrategia();
 }
int Interfaz::clave(EmpresaDots* e) {
	return e->getClave();
}