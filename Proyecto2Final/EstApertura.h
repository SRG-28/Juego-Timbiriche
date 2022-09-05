#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class EstApertura {//Interfaz <Abstract>

public:
	virtual void tipoEstrategia() = 0;  //MVP
};