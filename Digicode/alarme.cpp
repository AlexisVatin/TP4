#include "alarme.h"
#include <iostream>
#include <unistd.h>

using namespace std;


void nsDigicode::Alarme::declancher()
{
    while(true)
    {
        cout << "Alarme : la porte n'a pas été refermée" << sleep(1);
    }
}
