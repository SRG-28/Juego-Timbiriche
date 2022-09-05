#include "CampoNuevePuntos.h"
CampoNuevePuntos::CampoNuevePuntos() {
	codigo = "";
}
CampoNuevePuntos::~CampoNuevePuntos() {

}
string CampoNuevePuntos::getCodigo() {
	string tipo = typeid(*this).name();
	codigo = tipo;
	return codigo;
}