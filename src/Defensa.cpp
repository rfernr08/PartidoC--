#include <iostream>
#include <string>
#include "Defensa.h"

Defensa::Defensa(string name, int team){
    this->name = name;
    this->team = team;
    this->position = 2;
    this->tackleHability = generarStat();
    this->passHability = generarStat();
}

int Defensa::tackle(){
    return this->tackleHability;
}

int Defensa::pass(){
    return this->passHability;
}