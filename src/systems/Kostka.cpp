#include "systems/Kostka.h"
#include <cstdlib>

int Kostka::rzut()
{
    return rand() % liczbaScianek + 1;
}