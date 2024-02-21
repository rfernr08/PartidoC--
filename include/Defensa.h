#include <iostream>
#include <string>
#include "Jugador.h"
#include "Balon.h"
#include <memory>

class Defensa : public Jugador{
    private:
        string name;
        string team;
        int position;
        shared_ptr<Ball> ball;
        int tackleHability;
        int passHability;
    public:
        Defensa(string name);
        int tackle();
        int pass();
};