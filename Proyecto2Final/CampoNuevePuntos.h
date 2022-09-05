#pragma once
#include"CampoAbstracto.h"

using namespace std;
class CampoNuevePuntos :public CampoAbstracto
{
private:
	string codigo;
public:
	CampoNuevePuntos();
	virtual~CampoNuevePuntos();
	string getCodigo();



};

