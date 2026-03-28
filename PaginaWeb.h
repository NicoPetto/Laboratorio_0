//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_PAGINAWEB_H
#define LAB_0_PAGINAWEB_H
#include "Publicacion.h"


class PaginaWeb:public Publicacion {
private:
    string url;
    string contenidoExtraido;
public:
    bool contienePalabra(string palabra) override;
};



#endif //LAB_0_PAGINAWEB_H
