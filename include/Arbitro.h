#include "Jugador.h"
class Arbitro{
    private:
        string name;
    public:
        Arbitro(string name);
        void shootAtGoal(Jugador striker, Jugador goalkeeper);
        void passBall(Jugador player1, Jugador player2);
        void dribblePlayer(Jugador player1, Jugador player2);
        void tacklePlayer(Jugador player1, Jugador player2);
        void goal(Equipo team);
};