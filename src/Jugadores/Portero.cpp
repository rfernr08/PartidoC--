#include <iostream>
#include <string>
#include "Jugador.h"
#include "Portero.h"

Portero::Portero(string name, int team){
    this->name = name;
    this->team = team;
    this->position = 1;
    this->saveHability = generarRandom;
    this->passHability = generarRandom;
}