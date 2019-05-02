#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Chrono.h"
#include "capteur.h"

namespace nsDigicode {
    class Porte : public ObjetTempo
    {
    private:
        capteur myCapteur;
        bool fermer();

    public:
        Porte(Chrono* pchrono, int delai);
        bool ouvrir();

    };
}

#endif // PORTE_H
