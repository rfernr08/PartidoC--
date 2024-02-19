#include <iostream>
#include <string>
#include <vector>
#include "Equipo.h"
#include "Mister.h"

Equipo::Equipo(string name, Mister mister, vector<Partido> partidos){
    this->name_ = name;
    this->mister = mister;
    mister.coachTeam(this);
    this->partidos = partidos;
}

void Equipo::checkPositions(){
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
        this->jugadores = jugadores_;
    }
    else{
        cout << "El equipo no tiene las posiciones necesarias" << endl;
    }
}

void Equipo::getTeamGames(){
    for(int i = 0; i < partidos.size(); i++){
        cout << partidos[i].getResult() << endl;
    }
}

void Equipo::addGameRecord(Partido partido){
    this->partidos.push_back(partido);
}