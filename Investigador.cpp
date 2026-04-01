//
// Created by Nicolás on 27/3/2026.
//

#include "Investigador.h"
/*La operación listarPublicaciones(desde: DTFecha, palabra: String)
de la clase Investigador obtiene el identificador de todas sus publicaciones que
contengan la palabra indicada y cuya fecha sea posterior al parámetro desde. Para ello, se
itera sobre el conjunto de publicaciones asociadas al investigador. Para cada publicación cuya
fecha sea posterior a la indicada en el parámetro desde, se llama a la operación
contienePalabra. Si esta devuelve verdadero, se invoca el getter del atributo DOI y se
acumulan estos valores en un conjunto, que se retorna al finalizar la iteración.*/

Investigador::Investigador(string ORCID,string nombre,string institucion) {
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}
Investigador::~Investigador() {
cout<<"vorrado vovi";
}


string Investigador::toString() {
    return this->ORCID + "/" + this->institucion;
}

set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra) {
    bool b=false;
    set<string> final;
    //recorre la lisra de investigadores
    for (auto publicacion : this->publicaciones) {
        DTFecha a = publicacion->getFecha();
        if ( desde.getAnio()>a.getAnio()
            || desde.getAnio()==a.getAnio()&&desde.getMes()>a.getMes()
            || desde.getAnio()==a.getAnio()&&desde.getMes()==a.getMes()&&desde.getDia()>a.getDia()) {

            b=publicacion->contienePalabra(palabra);
            if (b==true) {
                final.insert(publicacion->getDOI());
            }
        }
    }
    return final;
}


