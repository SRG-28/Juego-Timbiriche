#include "PersonVSPerson.h"

PersonVSPerson::PersonVSPerson() {
	int col = cantiColumnas();
	int fi = 3;
	//lena la matriz
	for (int i = 0; i < fi; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = " . ";
		}
	}
}

PersonVSPerson::~PersonVSPerson() {

}

int PersonVSPerson::cantiColumnas() {
	int separador;  //tiene que recibir separador de ContenedorM...
	separador = 210;
	int columMat;
	srand(time(NULL));
	int x;
	x = 1 + rand() % separador;
	//columMat = x/3;
	columMat = 10;
	return columMat;
}

void PersonVSPerson::tipoJuego() {
	cout << "---------------Tipo de juego---------------" << endl;
	cout << "Jugador #1 vs. Jugador #2 " << endl << endl;
}

string PersonVSPerson::matrizJuego() {
	string x = "\nEspacio de juego\n";
	int col = cantiColumnas();
	int fi = 3;
	for (int i = 1; i <= col; i++) {
		cout << " " << i << " ";
	}
	cout << endl;
	for (int i = 0; i < fi; i++) {
		for (int j = 0; j < col; j++) {
			cout << mat[i][j];
		}
		cout << endl;
	}
	return x;
}

void PersonVSPerson::turnoJugador() {
	cout << "Ingrese las coordenadas para dibujar la linea: " << endl;
	//Usuario
	int fila, columna, n;
	int cantCol;
	cantCol = cantiColumnas() - 1;
	cout << "Fila(Digite un numero entre 0 y 2): ";  //punto de salida
	cin >> fila;
	cout << "Columna(Digite un numero entre 0 y " << cantCol << "): ";
	cin >> columna;
	cout << "Digite 0 si desea una linea horizontal y 1 si la desea vertical :";
	cin >> n;
	if (n == 1) {
		mat[fila][columna] = "| ";
		cout << matrizJuego();
	}
	else {
		mat[fila][columna] = " _ ";
		cout << matrizJuego();
	}

}

void PersonVSPerson::Juego() {   //en esta parte se juega
	for (int k = 0; k < 40; k++) { //k = cantidad de veces que se va a poner linea; //sequencia por 2
		cout << "Jugador # 1" << endl;  //incrementa una la cantidad de lineas que ha puesto el jugador
		turnoJugador();
		cout << "Jugador # 2" << endl;  //incrementa una la cant de lineas de jugador 2
		turnoJugador();
	}
}

