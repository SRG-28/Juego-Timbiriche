#include "ContenedorM.h"
#include"ContenedorM.h"
#include <Windows.h>
#include <conio.h>
#include<iostream>
ContenedorM::ContenedorM() {
    fil = 5;
    col = 70;
    separador = 0;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            mat[i][j] = false;
        }
    }
}
void ContenedorM::Imprimecontenedor() {

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] == true)
                cout << " " << "." << "  ";
        }cout << endl;
    }
}
void ContenedorM::ingresaPunto(int fi, int co, bool b) {

    if (fil > fi && col > co) {
        mat[fi][co] = b;
        separador++;
    }
}

int ContenedorM::getSeparador() {
    return separador;
}

void ContenedorM::setSeparador(int c) {
    separador = c;
}







bool ContenedorM::vacia() {
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] == true) {
                return false;
            }
        }

    }
    return true;
}


