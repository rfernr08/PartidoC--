#include <iostream>
#include <string>

class Delantero : public Jugador{
    private:
        string name;
        int team;
        int position;
        int shootHability;
        int dribleHability;
    public:
        Delantero(string name, int team){
            this->name = name;
            this->team = team;
            this->position = 4;
            this->shootHability = generarRandom;
            this->dribleHability = generarRandom;
        }                                   
        void shoot(){

        }
        void dribble(){

        }
};