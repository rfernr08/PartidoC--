#include "Arbitro.h"
#include <iostream>
using namespace std;

Arbitro::Arbitro(string name)
{
    this->name = name;
}

void Arbitro::shootAtGoal(Jugador striker, Jugador goalkeeper)
{
    if (striker.shoot() > goalkeeper.save())
    {
        goal(striker.getTeam());
        goalkeeper.dejarBalon();
    }
    else
    {
        striker.dejarBalon();
        goalkeeper.recibirBalon();
        // El balón pasa a ser del portero
    }
}

void Arbitro::goal(Equipo team)
{
    score(team);
    cout << "¡Gol!" << endl;
}

void Arbitro::passBall(Jugador player1, Jugador player2)
{
    if (player1.pass() > player2.pass())
    {// El balón pasa a ser de player2
        player1.dejarBalon();
        player2.recibirBalon();
        
    }
    else
    {// El balón sigue siendo de player1
    }
}

void Arbitro::dribblePlayer(Jugador player1, Jugador player2)
{
    if (player1.dribble() > player2.pass())
    {// El balón pasa a ser de player1
    }
    else
    {// El balón sigue siendo de player2
        player2.recibirBalon();
        player1.dejarBalon();
    }
}

void Arbitro::tacklePlayer(Jugador player1, Jugador player2)
{
    if (player1.tackle() > player2.pass())
    {
        // El balón pasa a ser de player1
        player1.recibirBalon();
        player2.dejarBalon();
    }
    else
    {
        // El balón sigue siendo de player2
    }
}