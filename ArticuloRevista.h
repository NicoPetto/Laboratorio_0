//
// Created by Nicolás on 27/3/2026.
//
#ifndef LAB_0_ARTICULOREVISTA_H
#define LAB_0_ARTICULOREVISTA_H
#include "Publicacion.h"


class ArticuloRevista: public Publicacion{
private:
   string revista;
   string extracto;
public:
   ArticuloRevista();
   ~ArticuloRevista();
   ArticuloRevista(string revista, string extracto);
   bool contienePalabra(string palabra) override;
};



#endif //LAB_0_ARTICULOREVISTA_H
