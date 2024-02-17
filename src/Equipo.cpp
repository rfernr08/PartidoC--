#include <iostream>
#include <string>
#include <vector>
#include "Equipo.h"

Equipo::Equipo(string name, Mister mister, vector<Jugador> jugadores, vector<Partido> partidos){
    this->name_ = name;
    this->mister = mister;
    this->jugadores = checkPositions(jugadores);
    this->partidos = partidos;
}

vector<Jugador> checkPositions(vector<Jugador> jugadores){
    vector<Jugador> jugadores_ = jugadores;
    bool hasPortero = false;
    bool hasDefensa = false;
    bool hasMedio = false;
    bool hasDelantero = false;
    for(int i = 0; i < jugadores_.size(); i++){
        if(jugadores_[i].getPosition() == 1){
            hasPortero = true;
        }
        if(jugadores_[i].getPosition() == 2){
            hasDefensa = true;
        }
        if(jugadores_[i].getPosition() == 3){
            hasMedio = true;
        }
        if(jugadores_[i].getPosition() == 4){
            hasDelantero = true;
        }
    }
    if(hasPortero && hasDefensa && hasMedio && hasDelantero){
        return jugadores;
    }
    else{
        cout << "El equipo no tiene las posiciones necesarias" << endl;
        return {};
    }
}

void Equipo::getTeamGames(){
    for(int i = 0; i < partidos.size(); i++){
        cout << partidos[i].getLocal() << " vs " << partidos[i].getVisitante() << endl;
    }
}