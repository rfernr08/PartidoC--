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
        Medio(string name, int team){
            this->name = name;
            this->team = team;
            this->position = 2;
            this->dribleHability = generarRandom;
            this->passHability = generarRandom;
        }
        void drible(){

        }
        void pass(){
            
        }
};