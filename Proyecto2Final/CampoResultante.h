#pragma once
#include"ContenedorV.h"
class CampoResultante :public CampoAbstracto {
	string codigo;
	ContenedorV* ContPrt;
public:
	CampoResultante(ContenedorV*);
	string getCodigo();
	void ingresaCampo(CampoAbstracto*);
	ContenedorV* retornaContenedor();

};
