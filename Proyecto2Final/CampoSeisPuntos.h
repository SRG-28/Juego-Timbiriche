#pragma once
#include"CampoAbstracto.h"
using namespace std;
class CampoSeisPuntos :public CampoAbstracto
{
private:
	string codigo;
public:
	CampoSeisPuntos();
	virtual~CampoSeisPuntos();
	string getCodigo();




};
