#include <iostream>
#include <string>
using namespace std;

class Jugador{
    private:
        string name;
        string team;
        int position;   
        bool hasBall;
    public:
        int generarStat();
        void recibirBalon();
        void dejarBalon();
        int tackle();
        int pass();
        int shoot();
        int dribble();
        int save();
        int getTeam();
        //void setTeam(int team);
        int getPosition();
};