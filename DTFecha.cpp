//
// Created by Nicolás on 27/3/2026.
//

#include "DTFecha.h"


int DTFecha::getDia() {
     return this->Dia;
}
int DTFecha::getMes() {
     return this->Mes;
}
int DTFecha::getAnio() {
     return this->Anio;
}

DTFecha::DTFecha(int Dia, int Mes, int Anio) {
     this->Dia = Dia;
     this->Mes = Mes;
     this->Anio = Anio;
}
