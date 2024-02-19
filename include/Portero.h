#include <iostream>
#include <string>
#include "Jugador.h"

class Portero : public Jugador{
    private:
        string name;
        string team;
        int position;
        bool hasBall;
        int saveHability;
        int passHability;
    public:
        Portero(string);
        int save();
        int pass();
};