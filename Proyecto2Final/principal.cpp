
#include"Control.h"

int main() {

	Control* c=new Control();
	c->control1();






}




	/*
	
	int opt = 0;
	int clave=0;
	string nom,ced;
	EmpresaDots* emp1 = new EmpresaDots(10000);
	do {
		cout << "--------------------EmpresaDots--------------------" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "1-Registrarse al Juego                              " << endl;
		cout << "2-Ingresar al Juego                                 " << endl;
		cout << "3-Salir                                             " << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "Digite opcion                                       " << endl;
		cin >> opt;

		switch (opt)
		{
		case 1: {
			cout << "Digite nombre" << endl;
			cin >> nom;
			cout << "Digite ID" << endl;
			cin >> ced;
			Observer* us = new Jugador(nom );
			us->update(1000,ced);
			if (emp1->registrado(us) == false) {
				if (us->getDinero() >= 500) {
					emp1->attach(us);
					cout << "**************************************************" << endl << endl;
					cout << "            Clave del dia : " << emp1->getClave() << endl << endl;
					cout << "**************************************************" << endl;
					

				}
				else {
					cout << "No tiene suficiente dinero para registrarse" << endl;
				}
			}
			else
				cout << "El usuario ya se encuentra Registrado" << endl;

		}break;
		case 2:
		{
			cout << "Digite Clave" << endl;
			cin >> clave;
			if (clave == emp1->getClave()) {
				cout << "hola" << endl;
				//Menu Juego
			}
			else {
				cout << "Clave Incorrecta" << endl;
			}
		}break;
		case 3: {

			cout << "Gracias" << endl;
		}


		}
	} while (opt != 3);



	system("pause");
	return 0;
}*/