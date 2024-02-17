#include <string>
#include <vector>   
#include "Mister.h"
#include "Jugador.h"
#include "Partido.h"

class Equipo {
    private:
        string name_;
        Mister mister;
        vector<Jugador> jugadores;
        vector<Partido> partidos;
    public: 
        Equipo(string name, Mister mister, vector<Jugador> jugadores, vector<Partido> partidos);
        void getTeamGames();
};