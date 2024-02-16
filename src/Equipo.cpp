#include <iostream>
#include <string>
#include "Equipo.h"

Equipo::Equipo(string name, Mister mister, vector<Jugador> jugadores, vector<Partido> partidos){
    this->name_ = name;
    this->mister = mister;
    this->jugadores = jugadores;
    this->partidos = partidos;
}