#include "Partido.h"

Partido::Partido(Equipo local, Equipo visitante){
    this->local = local;
    this->visitante = visitante;
}

void Partido::score(Equipo equipo){
    if(equipo == local){
        resultado[0]++;
    }else{
        resultado[1]++;
    }
}

string Partido::getResultado(){
    return to_string(resultado[0]) + " - " + to_string(resultado[1]);
}

void Partido::acabarPartido(){
    if(resultado[0] > resultado[1]){
        local.addPartido(this);
        visitante.addPartido(this);
        cout << "El equipo local ha ganado" << local.getName() << endl;
    }else{
        visitante.addPartido(this);
        local.addPartido(this);
        cout << "El equipo visitante ha ganado-" << visitante.getName() << endl;
    }
}