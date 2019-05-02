#include "capteur.h"
#include <iostream>
#include <kbhit.h>

namespace nsDigicode {

    capteur::capteur()
    {

    }




    int nsDigicode::capteur::detecter()
    {
        return _kbhit();
    }
}


