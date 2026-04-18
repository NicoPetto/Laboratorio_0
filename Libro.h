//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_LIBRO_H
#define LAB_0_LIBRO_H
#include "Publicacion.h"


class Libro:public Publicacion {
private:
    string editorial;
    string palabrasDestacadas;
public:
    ~Libro() override;
    Libro(string DOI, string titulo, DTFecha fecha, string editorial, string palabrasDestacadas);
    bool contienePalabra(string palabra) override;
};




#endif //LAB_0_LIBRO_H
