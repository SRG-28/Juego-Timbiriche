#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"EmpresaDots.h"
using namespace std;




class Observer {   //Usuario = observer  //Abstracta
protected:
	int dinero;
	string cedula;
public:
	Observer() { dinero = 0; cedula = ""; }
	Observer(int din) { dinero = din; }
	virtual~Observer() {}
	virtual void tipoUsuario() = 0;   //Metodo virtual puro
	virtual void update(int,string) = 0;
	virtual string toString() = 0;
	virtual int getDinero() { return dinero; }
	virtual string getcedula() { return cedula; }
	void setDinero(int v) { dinero = v; }
};