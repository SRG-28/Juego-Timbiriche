#pragma once
#include"CampoAbstracto.h"
class ContenedorV
{
private:
	int can;
	int tam;
	CampoAbstracto** vec;

public:
	ContenedorV();
	virtual ~ContenedorV();
	void agregarCampo(CampoAbstracto*);
	int getTamano();
	int getCantidad();
	CampoAbstracto* getCampo(int pos);



};


