using namespace std;

class Jugador{
    private:
        string name;
        int team;
        int position;   
        bool hasBall;
    public:
        int generarStat();
        void recibirBalon();
        void dejarBalon();
};