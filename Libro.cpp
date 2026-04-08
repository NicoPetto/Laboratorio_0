//
// Created by Nicolás on 27/3/2026.
//

#include "Libro.h"

Libro::~Libro(){
cout<<"Libro:"<<this->titulo<<" destruido"<<endl;
}
Libro::Libro(string DOI, string titulo, DTFecha fecha, string editorial, string palabrasDestacadas)
    : Publicacion(DOI, titulo, fecha), editorial(editorial), palabrasDestacadas(palabrasDestacadas)
{}
bool Libro::contienePalabra(string palabra){

}
