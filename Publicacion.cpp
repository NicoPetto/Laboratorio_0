//
// Created by Nicolás on 27/3/2026.
//

#include "Publicacion.h"

class Investigador;

Publicacion::Publicacion() {

}

Publicacion::~Publicacion() {

}

Publicacion::Publicacion(string DOI, string titulo, DTFecha fecha) {
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
}

DTRefer Publicacion::getDT() {
    set<string> autores;

    for (Investigador* i : investigadores) {
        autores.insert(i->getNombre());
    }

    return DTRefer(DOI, titulo, fecha, autores);
}

bool Publicacion::contienePalabra(string palabra) {

}

void Publicacion::addInvestigador(Investigador * investigador) {
    investigadores.push_back(investigador);
    investigador->addPublicacion(this);
}
