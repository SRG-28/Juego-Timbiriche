#include "Control.h"


Control::Control() {

	juego = NULL;
	emp1 = NULL;
}
Control::~Control() {

	delete juego;
	delete emp1;

}
void Control::control1() {
	control2();
}
void Control::control2() {
	int opt, clave;
	do {
		system("cls");
		opt = Interfaz::menuEmpresa();
		switch (opt)
		{
		case 1: {

			Interfaz::menu2Empresa();
		}break;

		case 2: {
			clave = Interfaz::menu3Empresa();

			if (clave == 123) {

				control3();
			}
			else {
				cout << "Clave Incorrecta" << endl;
			}
		}break;

		case 3: {
			Interfaz::Salir();
		}break;
		}
		system("pause");
	} while (opt != 3);
}
void Control::control3() {
	int opt;
	do {
		opt = Interfaz::menuJuego();
		switch (opt)
		{
		case 1: {
			Interfaz::Reglas();
		}break;
		case 2: {
			control5();
		}break;

		case 3: {
			Interfaz::Salir();
		}break;
		}

	} while (opt != 3);
}


void Control::control4() {
	int opt = 0;




	do {
		opt = Interfaz::menuJugada();
		switch (opt)
		{
		case 1: { 
			PersonVSPerson* PE = new PersonVSPerson();
			PE->Juego();
		}break;


		case 2: {
			control6();
		}break;



		case 3: {
			Interfaz::Salir();
		}break;

		}
	} while (opt != 3);

}




void Control::control5() {
	int opt1;
	ContenedorV* v = new ContenedorV();
	ContenedorM* m = new ContenedorM();
	CampoResultante* cam4 = new CampoResultante(v);
	do {
		opt1 = Interfaz::menuCampo();
		switch (opt1)
		{
		case 1: {
			CampoAbstracto* cam1 = new CampoSeisPuntos();
			v->agregarCampo(cam1);
			cout << "Creado" << endl;
		}break;


		case 2:
		{           CampoAbstracto* cam2 = new CampoNuevePuntos();
		v->agregarCampo(cam2);
		cout << "Creado" << endl;             }break;

		case 3: {

			CampoAbstracto* cam3 = new CampoQuincePuntos();
			v->agregarCampo(cam3);
			cout << "Creado" << endl;
		}break;

		case 4: {


			control4();

		}break;


		}
		ProcesaCompuesto* p = new ProcesaCompuesto(cam4->retornaContenedor());
		p->setContenMat(m);
		p->pasarInfoDeVecAMat();
		p->getContenMat()->Imprimecontenedor();
		cout << p->getContenMat()->getSeparador();
	} while (opt1 != 4);

}
void Control::control6() {
	int opt = 0;
	do {
		opt = Interfaz::menuEstrategia();
		switch (opt) {
		case 1: {
			EstApertura* p = new JuegoAleatorio();
			Maquina* m = new Maquina();
			m->setEstrategia(p);
			m->ejecutarEstrategia();
			JuegoAleatorio* jA = new JuegoAleatorio();
			jA->estrategiaAleatoria();
		

		}


		case 2: {
			EstApertura* p = new JuegoCentral();
			Maquina* m = new Maquina();
			m->setEstrategia(p);
			m->ejecutarEstrategia();
			JuegoCentral* jCE = new JuegoCentral();
			jCE->estrategiaCentral();
		
		}

		case 3: {

			EstApertura* p = new JuegoCercano();
			Maquina* m = new Maquina();
			m->setEstrategia(p);
			m->ejecutarEstrategia();
			JuegoCercano* jC = new JuegoCercano();
			jC->estrategiaCercano();
		
		}
		case 4: {
			EstApertura* p = new JuegoIslas();
			Maquina* m = new Maquina();
			m->setEstrategia(p);
			m->ejecutarEstrategia();
			JuegoIslas* jI = new JuegoIslas();
			jI->estrategiaIslas();
			jI->tipoEstrategia();
			
		}
		case 5: {
			EstApertura* p = new JuegoPeriferico();
			Maquina* m = new Maquina();
			m->setEstrategia(p);
			m->ejecutarEstrategia();
			JuegoPeriferico* jP = new JuegoPeriferico();
			jP->estrategiaPeriferico();

		}
		case 6: {

			Interfaz::Salir();
		}
		

		}
	} while (opt != 6);
}