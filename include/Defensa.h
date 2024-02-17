#include <iostream>
#include <string>
#include "Jugador.h"

class Defensa : public Jugador{
    private:
        string name;
        int team;
        int position;
        bool hasBall;
        int tackleHability;
        int passHability;
    public:
        Defensa(string name, int team);
        int tackle();
        int pass();
};