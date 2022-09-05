#pragma once
#include<iostream>
#include<string>
using namespace std;

class CampoAbstracto {
public:
	CampoAbstracto() {}
	virtual ~CampoAbstracto() {}
	virtual string getCodigo() = 0;
};
