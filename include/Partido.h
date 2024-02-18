#include <string>
#include "Equipo.h"
class Partido{
    private:
        int[2] resultado = {0,0};
        Equipo local;
        Equipo visitante;
    public:
        Partido(Equipo local, Equipo visitante);
        void score(Equipo equipo);
        string getResultado();
        //void jugarPartido();
        void acabarPartido();
};