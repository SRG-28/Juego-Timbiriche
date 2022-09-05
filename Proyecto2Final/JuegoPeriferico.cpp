#include "JuegoPeriferico.h"

JuegoPeriferico::JuegoPeriferico() {
	int col = cantiColumnas();
	int fi = 3;
	//lena la matriz
	for (int i = 0; i < fi; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = " . ";
		}
	}
}

JuegoPeriferico::~JuegoPeriferico() {

}

void JuegoPeriferico::tipoEstrategia() {
	cout << "---------------Tipo de estrategia---------------" << endl;
	cout << "Juego PERIFERICO" << endl << endl;
	cout << "*******************************************" << endl;
}

int JuegoPeriferico::cantiColumnas() {   //HACER LO DE SEPARADOR
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


int JuegoPeriferico::filaAleatoria() {
	int fi;
	int filaAle;
	filaAle = 3;
	srand(time(NULL));
	fi = 1 + rand() % filaAle;
	return fi;
}

int JuegoPeriferico::colAleatoria() {
	int co;
	int colAle;
	colAle = cantiColumnas() - 1;
	srand(time(NULL));
	co = 1 + rand() % colAle;
	return co;
}
string JuegoPeriferico::matrizJuego() {
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
void JuegoPeriferico::turnoJugador() {
	cout << "Ingrese las coordenadas para dibujar la linea: " << endl;
	//Usuario
	int fila, columna, n;
	int cantCol;
	cantCol = cantiColumnas() - 1;
	cout << "Fila(Digite un numero entre 0 y 3): ";  //punto de salida
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
void JuegoPeriferico::estrategiaPeriferico() {  //recibe una matriz y le coloca una linea en cualquier lugar									  						
											  //Juego
											  //k = cantidad de lineas  k = 48
	for (int j = 0; j < cantiColumnas(); j++) {
		mat[0][j] = " _ ";
		cout << matrizJuego();
		turnoJugador();
	}
	for (int i = 0; i < 3; i++) {
		mat[i][0] = " | ";
		cout << matrizJuego();
		turnoJugador();
	}
	for (int j = 0; j < 3; j++) {
		mat[j][3] = " _ ";
		cout << matrizJuego();
		turnoJugador();
	}
	for (int j = 0; j < cantiColumnas(); j++) {
		mat[3][j] = " | ";
		cout << matrizJuego();
		turnoJugador();
	}

	cout << "Ganador = Jugador" << endl;
	matrizJuego();
}
