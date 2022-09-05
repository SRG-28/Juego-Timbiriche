#include "CampoResultante.h"
CampoResultante::CampoResultante(ContenedorV* v) :CampoAbstracto() {
	ContPrt = v;
}
string CampoResultante::getCodigo() {

	codigo = ContPrt->getCampo(ContPrt->getCantidad())->getCodigo();
	return codigo;
}
void CampoResultante::ingresaCampo(CampoAbstracto* c) {
	ContPrt->agregarCampo(c);

}
ContenedorV* CampoResultante::retornaContenedor() {
	return ContPrt;
}