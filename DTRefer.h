//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_DTREFER_H
#define LAB_0_DTREFER_H
#include "DTFecha.h"


class DTRefer {
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    string autores;

public:
    DTRefer(string DOI, string titulo, DTFecha fecha, string autores);
    string getDOI();
    string getTitulo();
    DTFecha getFecha();
    string getAutores();

};



#endif //LAB_0_DTREFER_H
