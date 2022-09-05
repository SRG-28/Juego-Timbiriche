#include "CampoQuincePuntos.h"
CampoQuincePuntos::CampoQuincePuntos() {
    codigo = "";
}
CampoQuincePuntos::~CampoQuincePuntos() {

}
string CampoQuincePuntos::getCodigo() {
    string tipo = typeid(*this).name();
    codigo = tipo;
    return codigo;
}
