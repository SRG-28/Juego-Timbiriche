#pragma once
#include"CampoAbstracto.h"
using namespace std;
class CampoQuincePuntos :public CampoAbstracto
{
private:
	string codigo;
public:
	CampoQuincePuntos();
	virtual~CampoQuincePuntos();
	string getCodigo();



};
