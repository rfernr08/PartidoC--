#include <iostream>
#include <string>
#include "Jugador.h"

class Delantero : public Jugador{
    private:
        string name;
        int team;
        int position;
        bool hasBall;   
        int shootHability;
        int dribleHability;
    public:
        Delantero(string name, int team);                                  
        int shoot();
        int dribble();
};