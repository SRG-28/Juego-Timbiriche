#pragma once
#include"ContenedorV.h"
#include"ContenedorM.h"

class ProcesaCompuesto {
private:
	ContenedorV* ContV;
	ContenedorM* ContM;
	int separador;
public:
	ProcesaCompuesto(ContenedorV*);
	~ProcesaCompuesto();
	void pasarInfoDeVecAMat();
	ContenedorM* getContenMat();
	void setContenMat(ContenedorM*);
	ProcesaCompuesto(ProcesaCompuesto&);

};
