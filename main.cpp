#include <iostream>

#include "Publicacion.h"
#include "Investigador.h"

#include "ArticuloRevista.h"
using namespace std;

int main() {
    DTFecha fecha1(15,5,2023);
    DTFecha fecha2(14,5,2021);
    DTFecha fecha3(16,5,2023);
    Publicacion * p1 = new ArticuloRevista("10.1234/abc123", "Fundamentos de POO", fecha1, "Programacion Avanzada", "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
    Investigador * i1 = new Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la República");

    i1->addPublicacion(p1);
    set <string> listado1 = i1->listarPublicaciones(fecha2, "Introduccion");
    set <string> listado2 = i1->listarPublicaciones(fecha3, "Introduccion");

    cout << "Publicaciones encontradas l1:" << endl;
    for (const string& publi : listado1) {
        cout << publi << endl;
    }

    cout << "Publicaciones encontradas l2:" << endl;
    for (const string& publi : listado2) {
        cout << publi << endl;
    }

    return 0;

}