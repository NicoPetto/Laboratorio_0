//
// Created by Nicolás on 27/3/2026.
//

#include "Publicacion.h"


Publicacion::Publicacion() {

}

Publicacion::~Publicacion() {

}

Publicacion::Publicacion(string DOI, string titulo, DTFecha fecha) {
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
}

string Publicacion::getDOI() {
    return this->DOI;
}

DTRefer Publicacion::getDT() {
    set<string> autores; //creo un "set" que no permite duplicados y los ordena

    for (Investigador* i : investigadores) { //recorro los investigadores de la publicación e inserto su nombre en el set
        autores.insert(i->getNombre());
    }

    return DTRefer(DOI, titulo, fecha, autores); //devuelvo el objeto
}

void Publicacion::addInvestigador(Investigador * investigador) {
    investigadores.push_back(investigador);
}
