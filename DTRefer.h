//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_DTREFER_H
#define LAB_0_DTREFER_H
#include "DTFecha.h"
#include <set>
using namespace std;


class DTRefer {
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    set<string> autores;

public:
    DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);
    string getDOI() const;
    string getTitulo() const;
    DTFecha getFecha() const;
    set<string> getAutores() const;

    friend ostream& operator<<(ostream& os, const DTRefer& dt);

};

ostream& operator<<(ostream& os, const DTRefer& dt) {

    os << dt.getDOI() << "->" << dt.getTitulo() << "(" << dt.getFecha() << ")/";
    set<string> autores = dt.getAutores();
    for (auto it = autores.begin(); it != autores.end(); ++it) {
        os << *it;
        if (next(it) != autores.end()) {
            os << ",";
        }
    }

    return os;
}


#endif //LAB_0_DTREFER_H
