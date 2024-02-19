#include <iostream>
#include <string>
#include "Portero.h"

Portero::Portero(string name){
    this->name = name;
    this->team = team;
    this->position = 1;
    this->saveHability = generarStat();
    this->passHability = generarStat();
}

int Portero::save(){
    return this->saveHability;
}

int Portero::pass(){
    return this->passHability;
}