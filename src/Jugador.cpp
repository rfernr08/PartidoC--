#include <iostream>
#include <string>
#include "Jugador.h"

int Jugador::generarStat(){
    return rand() %5 + 1;
}

void Jugador::recibirBalon(){
    this->hasBall = true;
}

void Jugador::dejarBalon(){
    this->hasBall = false;
}