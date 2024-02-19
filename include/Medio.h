#include <iostream>
#include <string>
#include "Jugador.h"

class Medio : public Jugador{
    private:
        string name;
        string team;
        int position;
        bool hasBall;
        int dribleHability;
        int passHability;
    public:
        Medio(string name);
        int drible();
        int pass();
};