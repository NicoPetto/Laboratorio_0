//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_DTFECHA_H
#define LAB_0_DTFECHA_H
#include <iostream>
using namespace std;


class DTFecha {

private:
    int Dia;
    int Mes;
    int Anio;
public:
    DTFecha(int Dia, int Mes, int Anio);
    int getDia();
    int getMes();
    int getAnio();
};



#endif //LAB_0_DTFECHA_H
