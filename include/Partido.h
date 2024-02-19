#include <string>
#include "Equipo.h"
#include "Arbitro.h"
class Partido{
    private:
        int resultado[2] = {0,0};
        Equipo local;
        Equipo visitante;
    public:
        Partido(Equipo local, Equipo visitante, Arbitro arbitro);
        void score(Equipo equipo);
        string getResult();
        //void jugarPartido();
        void acabarPartido();
};