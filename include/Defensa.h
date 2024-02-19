#include <iostream>
#include <string>
#include "Jugador.h"

class Defensa : public Jugador{
    private:
        string name;
        string team;
        int position;
        bool hasBall;
        int tackleHability;
        int passHability;
    public:
        Defensa(string name);
        int tackle();
        int pass();
};