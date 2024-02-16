#include <iostream>
#include <string>
#include "Jugador.h"

class Defensa : public Jugador{
    private:
        string name;
        int team;
        int position;
        int tackleHability;
        int passHability;
    public:
        Defensa(string name, int team){
            this->name = name;
            this->team = team;
            this->position = 2;
            this->tackleHability = generarRandom;
            this->passHability = 0;
        }
        void tackle(){

        }
        void pass(){
            
        }
};