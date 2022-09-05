#include "CampoSeisPuntos.h"


CampoSeisPuntos::CampoSeisPuntos() {
	codigo = "";

}
CampoSeisPuntos::~CampoSeisPuntos() {

}
string CampoSeisPuntos::getCodigo() {
	string tipo = typeid(*this).name();
	codigo = tipo;
	return codigo;
}
