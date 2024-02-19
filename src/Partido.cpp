#include "Partido.h"

Partido::Partido(Equipo local, Equipo visitante, Arbitro arbitro){
    this->local = local;
    this->visitante = visitante;
    this->arbitro = arbitro;
}

void Partido::score(Equipo equipo){
    if(equipo == local){
        resultado[0]++;
    }else{
        resultado[1]++;
    }
}

string Partido::getResult(){
    return to_string(resultado[0]) + " - " + to_string(resultado[1]);
}

void Partido::acabarPartido(){
    if(resultado[0] > resultado[1]){
        local.addGameRecord(this);
        visitante.addGameRecord(this);
        cout << "El equipo local ha ganado-" << local.getName() << endl;
    }else{
        visitante.addGameRecord(this);
        local.addGameRecord(this);
        cout << "El equipo visitante ha ganado-" << visitante.getName() << endl;
    }
}