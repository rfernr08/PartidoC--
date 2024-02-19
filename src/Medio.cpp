#include <iostream>
#include <string>
#include "Medio.h"

Medio::Medio(string name){
    this->name = name;
    this->team = team;
    this->position = 2;
    this->dribleHability = generarStat();
    this->passHability = generarStat();
}

int Medio::drible(){
    return this->dribleHability;   
}

int Medio::pass(){
    return this->passHability;
}