#include "ProcesaCompuesto.h"
ProcesaCompuesto::ProcesaCompuesto(ContenedorV* c) :ContV(c) {

}
ProcesaCompuesto::~ProcesaCompuesto() {
	delete ContV;
	delete ContM;
}
void ProcesaCompuesto::pasarInfoDeVecAMat() {
	separador = ContM->getSeparador();
	int can = ContV->getCantidad();
	int fil = 0;
	int col = 0;
	int x = 0;
	int j = 0;
	for (int i = 0; i < can; i++) {

		if (ContV->getCampo(i)->getCodigo() == "class CampoSeisPuntos") {
			fil = 3;
			col = 2;
		}
		else
			if (ContV->getCampo(i)->getCodigo() == "class CampoNuevePuntos") {
				fil = 3;
				col = 3;

			}

			else


				if (ContV->getCampo(i)->getCodigo() == "class CampoQuincePuntos") {
					fil = 5;
					col = 3;

				}
	}
	if (separador != 0) {
		x = separador / 3 + 1;
		col += separador / 3 + 1;
	}

	for (int r = j; r < fil; r++) {
		for (int s = x; s < col; s++) {
			ContM->ingresaPunto(r, s, true);

		}
	}
}



ContenedorM* ProcesaCompuesto::getContenMat() {
	return ContM;
}
ProcesaCompuesto::ProcesaCompuesto(ProcesaCompuesto& p) {
	this->ContM = p.ContM;
	this->ContV = p.ContV;
	this->separador = p.separador;
}

void ProcesaCompuesto::setContenMat(ContenedorM* cont) {

	ContM = cont;
}