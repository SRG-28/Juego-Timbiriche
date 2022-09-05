
#pragma once
#include"Observer.h"
#include"Jugador.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;	
class Observer;
	class EmpresaDots {
	private:
		int claveUsu;
		Observer** vec;
		int can;
		int tam;
		int pago;
	public:
		EmpresaDots(int);
		virtual ~EmpresaDots();
		void attach(Observer* usua);
		void setValores(int clav);
		//void notify();
		//void creacionClave();
		void infoClave();
		int  getpago();
		int getClave();
		void setClave(int);
		bool registrado(Observer*);
	};



