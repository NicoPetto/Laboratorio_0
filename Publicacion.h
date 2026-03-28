//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_PUBLICACION_H
#define LAB_0_PUBLICACION_H
#include <iostream>
using namespace std;

#include "DTFecha.h"
#include "DTRefer.h"
#include <list>
#include "Investigador.h"

class Publicacion {

protected:
    string DOI;
    string titulo;
    DTFecha fecha;
    list<Investigador *> investigadores;

public:
    Publicacion();
    Publicacion(string DOI, string titulo, DTFecha fecha);
    ~Publicacion();
    DTRefer getDT();
    virtual bool contienePalabra(string palabra);
    void addInvestigador(Investigador * investigador);

};



#endif //LAB_0_PUBLICACION_H
