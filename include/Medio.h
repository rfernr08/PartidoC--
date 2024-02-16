#include <iostream>
#include <string>
#include "Jugador.h"

class Medio : public Jugador{
    private:
        string name;
        int team;
        int position;
        int dribleHability;
        int passHability;
    public:
        Medio(string name, int team);
        int drible();
        int pass();
};