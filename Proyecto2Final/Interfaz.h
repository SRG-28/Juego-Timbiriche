#pragma once
#include<iostream>
#include"Juego.h"
#include"CampoAbstracto.h"
#include"CampoNuevePuntos.h"
#include"CampoQuincePuntos.h"
#include"CampoResultante.h"
#include"CampoSeisPuntos.h"
#include"CampoResultante.h"
#include"ProcesaCompuesto.h"
#include"ContenedorV.h"
#include"ContenedorM.h"


using namespace std;
class Interfaz {
public:
	static void menu2Empresa();
	static int menu3Empresa();
	static int menuEmpresa();
	static int menuCampo();
	static void Salir();
	static int menuJugada();
	static int menuEstrategia();
	static int menuJuego();
	static void Reglas();
	static void Estrategiaale();
	static void Estrategiacent();
	static void Estrategiaisla();
	static void Estrategiacer();
	static void Estrategiaper();
	static int clave(EmpresaDots*);


};