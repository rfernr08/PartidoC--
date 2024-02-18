#include "Mister.h"

Mister::Mister(string name){
    this->name = name;
}

void Mister::addPlayer(Jugador jugador){
    this->team->jugadores.add(jugador);
}

void Mister::coachTeam(Equipo newTeam){
    this->team = team; 
}