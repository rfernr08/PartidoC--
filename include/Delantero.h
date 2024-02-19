#include <iostream>
#include <string>
#include "Jugador.h"

class Delantero : public Jugador{
    private:
        string name;
        string team;
        int position;
        bool hasBall;   
        int shootHability;
        int dribleHability;
    public:
        Delantero(string name);                                  
        int shoot();
        int dribble();
};