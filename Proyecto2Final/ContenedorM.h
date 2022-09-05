#pragma once
using namespace std;

class ContenedorM {
private:
	bool mat[5][70];
	int fil;
	int col;
	int separador;
public:
	ContenedorM();
	void Imprimecontenedor();
	void ingresaPunto(int fi, int co, bool b);
	int getSeparador();
	void setSeparador(int);

	bool vacia();
};