#include "JuegoCercano.h"

JuegoCercano::JuegoCercano() {
	int col = cantiColumnas();
	int fi = 3;
	//lena la matriz
	for (int i = 0; i < fi; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = " . ";
		}
	}
}

JuegoCercano::~JuegoCercano() {

}

void JuegoCercano::tipoEstrategia() {
	cout << "---------------Tipo de estrategia---------------" << endl;
	cout << "Juego Cercano" << endl << endl;
}

int JuegoCercano::cantiColumnas() {   //HACER LO DE SEPARADOR

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


int JuegoCercano::filaAleatoria() {
	int fi;
	int filaAle;
	filaAle = 3;
	srand(time(NULL));
	fi = 1 + rand() % filaAle;
	return fi;
}

int JuegoCercano::colAleatoria() {
	int co;
	int colAle;
	colAle = cantiColumnas() - 1;
	srand(time(NULL));
	co = 1 + rand() % colAle;
	return co;
}
string JuegoCercano::matrizJuego() {
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
void JuegoCercano::turnoJugador() {
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


void JuegoCercano::estrategiaCercano() {  //recibe una matriz y le coloca una linea en cualquier lugar									  						
	//Juego
	//k = cantidad de lineas  k = 48
	for (int k = 0; k < 5; k++) {
		for (int j = 0; 0 < 2; j++) {
			//fila
			int fi;
			int filaAle = 3;
			srand(time(NULL));
			fi = 1 + rand() % filaAle;
			//columna
			int co;
			int colum = cantiColumnas() - 1;
			srand(time(NULL));
			co = 1 + rand() % filaAle;
			mat[fi][co] = " _ ";
			cout << matrizJuego();
			turnoJugador();
			//fila
			int fi1;
			int filaAle1 = 3;
			srand(time(NULL));
			fi1 = 1 + rand() % filaAle1;
			//columna
			int co1;
			int colum1 = cantiColumnas() - 1;
			srand(time(NULL));
			co1 = 1 + rand() % filaAle1;
			mat[fi1][co1] = " | ";
			cout << matrizJuego();
			turnoJugador();
		}
		matrizJuego();
	}
}
