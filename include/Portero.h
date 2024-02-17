#include <iostream>
#include <string>
#include "Jugador.h"

class Portero : public Jugador{
    private:
        string name;
        int team;
        int position;
        bool hasBall;
        int saveHability;
        int passHability;
    public:
        Portero(string name, int team);
        int save();
        int pass();
};