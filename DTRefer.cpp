//
// Created by Nicolás on 27/3/2026.
//

#include "DTRefer.h"
#include "DTFecha.h"


DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores)
    : DOI(DOI), titulo(titulo), fecha(fecha), autores(autores)
{}
string DTRefer:: getDOI() {
return this->DOI;
}
string DTRefer::getTitulo() {
return this->titulo;
}
DTFecha DTRefer:: getFecha() {
    return this->fecha;
}
set<string> DTRefer::getAutores() {
return this->autores;
}
