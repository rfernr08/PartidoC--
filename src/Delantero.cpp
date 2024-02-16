#include <iostream>
#include <string>
#include "Delantero.h"

Delantero::Delantero(string name, int team){
    this->name = name;
    this->team = team;
    this->position = 4;
    this->shootHability = generarStat();
    this->dribleHability = generarStat();
}                                   
int Delantero::shoot(){
    return this->shootHability; 
}
int Delantero::dribble(){
    return this->dribleHability;
}