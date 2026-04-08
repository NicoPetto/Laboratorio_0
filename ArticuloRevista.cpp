//
// Created by Nicolás on 27/3/2026.
//

#include "ArticuloRevista.h"
ArticuloRevista::~ArticuloRevista() {
    cout<<"Articulo Revista: "<<this->revista<<" destruido"<<endl;
}

ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto)
: Publicacion(DOI, titulo, fecha), revista(revista), extracto(extracto)
{}

bool ArticuloRevista::contienePalabra(string palabra) {

}
