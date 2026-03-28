//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_INVESTIGADOR_H
#define LAB_0_INVESTIGADOR_H

#include "Publicacion.h"


class Investigador {
private:
    string ORCID;
    string nombre;
    string institucion;
public:
    Investigador();
    ~Investigador();
    Investigador(string ORCID, string nombre, string institucion);
    string toString();
    string listarPublicaciones(DTFecha desde, string palabra);

};



#endif //LAB_0_INVESTIGADOR_H
